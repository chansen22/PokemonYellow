//
//  Game.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include <unistd.h>

#include "Game.hpp"
#include "EventHandler.hpp"
#include "BackgroundHandler.hpp"
#include "Player.hpp"
#include "Pallet.hpp"

Game::Game() {
  this->spriteHandler = new SpriteHandler();
}

Game::~Game() {
  delete this->spriteHandler;
}

int resolution = 1024;

void Game::start() {
  sf::RenderWindow window(sf::VideoMode(resolution, resolution), "Pokeman");
  window.setFramerateLimit(60);
  sf::RenderWindow *renderWindow = &window;
  EventHandler *eventHandler = new EventHandler(renderWindow);
  BackgroundHandler *backgroundHandler = new BackgroundHandler();
  
  Player *player = new Player(resolution / 2, resolution / 2);
  eventHandler->setPlayer(player);
  spriteHandler->addDrawable((Drawable *)player);
  eventHandler->addEventable((Eventable *)player);
  
  Pallet *palletTown = new Pallet(PalletTown);
  backgroundHandler->addDrawable((Drawable *)palletTown);
  eventHandler->addEventable((Eventable *)palletTown);
  
  while (window.isOpen()) {
    // Process events
    sf::Event event;
    while (window.pollEvent(event)) {
      sf::Event *eventPtr = &event;
      eventHandler->handleEvent(eventPtr);
    }
    
    // Clear screen
    window.clear();
    
    backgroundHandler->drawInWindow(renderWindow);
    spriteHandler->drawInWindow(renderWindow);
    spriteHandler->stepSprites();

    // Update the window
    window.display();
    usleep(100000);
  }
  
  delete player;
  delete palletTown;
  delete eventHandler;
  delete backgroundHandler;
}
