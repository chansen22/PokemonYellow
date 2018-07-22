//
//  BackgroundHandler.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 7/8/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include "BackgroundHandler.hpp"

BackgroundHandler::BackgroundHandler(void) {
  drawables = new std::vector<Drawable *>();
}

BackgroundHandler::~BackgroundHandler() {
  delete drawables;
}

void BackgroundHandler::addDrawable(Drawable *drawable) {
  std::vector<Drawable *>::iterator it = drawables->begin();
  drawables->insert(it, drawable);
}

void BackgroundHandler::drawInWindow(sf::RenderWindow *window) {
  std::vector<Drawable *>::iterator it;
  for (it = drawables->begin(); it < drawables->end(); it++) {
    sf::Sprite sprite = (*it)->getSprite();
    sprite.setScale(8, 8);
    window->draw(sprite);
  }
}

void BackgroundHandler::stepSprites() { }
