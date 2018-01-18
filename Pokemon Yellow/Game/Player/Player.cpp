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
  return this->sprite;
}

#pragma mark - Private

void Player::setup() {
  // Load a sprite to display
  if (!this->texture.loadFromFile(resourcePath() + "player1.png")) {
    return EXIT_FAILURE;
  }
  this->sprite = sf::Sprite(texture);
}
