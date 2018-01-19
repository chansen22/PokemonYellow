//
//  Player.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include "Player.hpp"
#include "ResourcePath.hpp"

Player::Player() {
  setup();
}

Player::~Player() {
}

sf::Sprite Player::getSprite() {
  this->sprite.setScale(10, 10);
  return this->sprite;
}

void Player::stepSprite() {
  std::string path = resourcePath() + "playerRight" + std::to_string(step) + ".png";
  this->texture.loadFromFile(path);
  this->sprite = sf::Sprite(texture);
  this->x += 10;
  this->sprite.setPosition((float)this->x, (float)this->y);
  int newStep = this->step + 1;
  newStep = newStep % 3 == 0 ? 1 : 2;
  this->step = newStep;
}

#pragma mark - Private

void Player::setup() {
  // Load a sprite to display
  if (!this->texture.loadFromFile(resourcePath() + "player2.png")) {
    return EXIT_FAILURE;
  }
  this->sprite = sf::Sprite(texture);
}
