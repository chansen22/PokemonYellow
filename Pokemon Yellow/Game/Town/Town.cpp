//
//  Town.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/28/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include "Town.hpp"
#include "ResourcePath.hpp"

const std::string pngExtension = ".png";

Town::Town(TownName name) {
  this->townName = name;
  setup();
}

void Town::setupBoundries() { }

sf::Sprite Town::getSprite() {
  return this->sprite;
}

void Town::stepSprite() { }

int spriteMoveDistance = 128;

void Town::directionEvent(DirectionEvent direction, void *player) {
  sf::Vector2f position = sprite.getPosition();
  switch (direction) {
    case up:
      if (canMove(direction, player)) {
        x = (position.x + 4) / spriteMoveDistance;
        y = (position.y + 4) / spriteMoveDistance;
        sprite.setPosition(position.x, position.y + spriteMoveDistance);
      }
      break;
    case down:
      sprite.setPosition(position.x, position.y - spriteMoveDistance);
      break;
    case left:
      sprite.setPosition(position.x + spriteMoveDistance, position.y);
      break;
    case right:
      sprite.setPosition(position.x - spriteMoveDistance, position.y);
      break;
  }
}

bool Town::canMove(DirectionEvent, void *) { }

#pragma MARK - Private

void Town::setup() {
  switch (this->townName) {
    case PalletTown:
      this->imageString = "Pallet";
      break;
    case ViridianTown:
      this->imageString = "Viridian";
      break;
  }
  this->imageString = this->imageString + pngExtension;
  if (!this->texture.loadFromFile(resourcePath() + this->imageString)) {
    return EXIT_FAILURE;
  }
  setupBoundries();
}
