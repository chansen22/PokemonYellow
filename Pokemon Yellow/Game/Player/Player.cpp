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

Player::Player(int xPos, int yPos) {
  setup();
  x = xPos;
  y = yPos;
}

Player::~Player() {
}

#pragma mark - Drawable

sf::Sprite Player::getSprite() {
  return sprite;
}

void Player::stepSprite() {
  std::string stepString = std::to_string(step);
  texture.loadFromFile(resourcePath() + imageString + stepString + pngExtension);
  sprite = sf::Sprite(texture);
  sprite.setPosition(512, 512);
  int newStep = step + 1;
  newStep = newStep % 3 == 0 ? 1 : 2;
  step = newStep;
}

#pragma mark - Eventable

void Player::directionEvent(DirectionEvent event, void *) {
  step = 1;
  switch (event) {
    case up:
      return imageString = imagePrefix + upImage;
    case down:
      return;/*imageString = imagePrefix + downImage;*/
    case left:
      return imageString = imagePrefix + leftImage;
    case right:
      return imageString = imagePrefix + rightImage;
  }
}

bool Player::canMove(DirectionEvent event, void *) { return false; }

#pragma mark - Private

void Player::setup() {
  imageString = imagePrefix + standingImage;
  // Load a sprite to display
  if (!texture.loadFromFile(resourcePath() + imageString)) {
    return EXIT_FAILURE;
  }
  sprite = sf::Sprite(texture);
}
