//
//  SpriteHandler.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include "SpriteHandler.hpp"

SpriteHandler::SpriteHandler(void) {
  this->sprites = new std::vector<sf::Sprite>();
}

SpriteHandler::~SpriteHandler() {
  delete this->sprites;
}

void SpriteHandler::addSprite(sf::Sprite sprite) {
  std::vector<sf::Sprite>::iterator it = this->sprites->begin();
  this->sprites->insert(it, sprite);
}

void SpriteHandler::drawSpritesInWindow(sf::RenderWindow *window) {
  std::vector<sf::Sprite>::iterator it;
  for (it = sprites->begin(); it < sprites->end(); it++) {
    window->draw(*it);
  }
}
