//
//  Game.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include "Game.hpp"
#include "EventHandler.hpp"

Game::Game() {
  this->spriteHandler = new SpriteHandler();
}

Game::~Game() {
  delete this->spriteHandler;
}

void Game::start() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "Pokeman");
  window.setFramerateLimit(60);
  sf::RenderWindow *renderWindow = &window;
  EventHandler *eventHandler = new EventHandler(renderWindow);

  while (window.isOpen()) {
    // Process events
    sf::Event event;
    while (window.pollEvent(event)) {
      sf::Event *eventPtr = &event;
      eventHandler->handleEvent(eventPtr);
    }
    
    // Clear screen
    window.clear();
    
    spriteHandler->drawSpritesInWindow(renderWindow);

    // Update the window
    window.display();
  }
  
  delete eventHandler;
}
