//
//  Pallet.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/28/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include "Pallet.hpp"
#include "ResourcePath.hpp"
#include "Player.hpp"

Pallet::Pallet(TownName name) : Town(name) {
  setup();
}

Pallet::~Pallet() { }

void Pallet::setup() {
  this->sprite = sf::Sprite(texture, sf::IntRect(4, 4, 128, 128));
  x = 4;
  y = 4;
  width = 128 / 16;
  height = 128 / 16;
  setupBoundries();
}

void Pallet::setupBoundries() {
  boundries = new std::vector<std::vector<Boundry *>> (width, std::vector<Boundry *>());
  for (int i = 0; i < width; ++i) {
    (*boundries)[i] = std::vector<Boundry *>(height, NULL);
  }
  addWalls();
}

void Pallet::addWalls() {
  for (int i = 0; i < boundries->size(); ++i) {
    (*boundries)[0][i] = new Boundry(0, i, wall);
    (*boundries)[i][0] = new Boundry(i, 0, wall);
    (*boundries)[width - 1][i] = new Boundry(width - 1, i, wall);
    (*boundries)[i][height - 1] = new Boundry(i, height - 1, wall);
  }
}

//void Pallet::addWalls() {
//  for (int i = 0; i < width; ++i) {
//    auto it = boundries->end();
//    if (i != 0 || i != height) {
//      Boundry *leftBoundry = new Boundry(0, i, wall);
//      Boundry *rightBoundry = new Boundry(width, i, wall);
//      it = boundries->end();
////      boundries->insert(it, leftBoundry);
//      it = boundries->end();
////      boundries->insert(it, rightBoundry);
//    }
//    Boundry *topBoundry = new Boundry(i, 0, wall);
//    Boundry *bottomBoundry = new Boundry(i, height, wall);
//    it = boundries->end();
////    boundries->insert(it, topBoundry);
//    it = boundries->end();
////    boundries->insert(it, bottomBoundry);
//  }
//
//}

bool Pallet::canMove(DirectionEvent direction, void *p) {
  Player *player = (Player *)p;
  
  int xPos = x;
  int yPos = y;
  switch (direction) {
    case up:
      yPos -= 1;
      break;
    case down:
      yPos += 1;
      break;
    case left:
      xPos -= 1;
      break;
    case right:
      xPos += 1;
      break;
  }
  
  Boundry *boundry = (*boundries)[xPos][yPos];
  if (boundry != NULL && boundry->type == wall) {
    return false;
  }
  return true;
}
