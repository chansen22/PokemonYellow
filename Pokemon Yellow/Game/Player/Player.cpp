//
//  Player.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include "Player.hpp"
#include "ResourcePath.hpp"

const std::string pngExtension = ".png";
const std::string imagePrefix = "player_";
const std::string standingImage = "standing";
const std::string upImage = "up";
const std::string rightImage = "right";
const std::string leftImage = "left";

Player::Player() {
  setup();
}

Player::~Player() {
}

#pragma mark - Drawable

sf::Sprite Player::getSprite() {
  this->sprite.setScale(10, 10);
  return this->sprite;
}

void Player::stepSprite() {
  std::string stepString = std::to_string(step);
  this->texture.loadFromFile(resourcePath() + this->imageString + stepString + pngExtension);
  this->sprite = sf::Sprite(texture);
  int newStep = this->step + 1;
  newStep = newStep % 3 == 0 ? 1 : 2;
  this->step = newStep;
}

#pragma mark - Eventable

void Player::directionEvent(DirectionEvent event) {
  this->step = 1;
  switch (event) {
    case up:
      return this->imageString = imagePrefix + upImage;
    case down:
      return;/*this->imageString = imagePrefix + downImage;*/
    case left:
      return this->imageString = imagePrefix + leftImage;
    case right:
      return this->imageString = imagePrefix + rightImage;
  }
}

#pragma mark - Private

void Player::setup() {
  this->imageString = imagePrefix + standingImage;
  // Load a sprite to display
  if (!this->texture.loadFromFile(resourcePath() + this->imageString)) {
    return EXIT_FAILURE;
  }
  this->sprite = sf::Sprite(texture);
}
