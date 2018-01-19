//
//  SpriteHandler.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include "SpriteHandler.hpp"

SpriteHandler::SpriteHandler(void) {
  this->drawables = new std::vector<Drawable *>();
}

SpriteHandler::~SpriteHandler() {
  delete this->drawables;
}

void SpriteHandler::addDrawable(Drawable *drawable) {
  std::vector<Drawable *>::iterator it = this->drawables->begin();
  this->drawables->insert(it, drawable);
}

void SpriteHandler::drawInWindow(sf::RenderWindow *window) {
  std::vector<Drawable *>::iterator it;
  for (it = drawables->begin(); it < drawables->end(); it++) {
    sf::Sprite sprite = (*it)->getSprite();
    window->draw(sprite);
  }
}
