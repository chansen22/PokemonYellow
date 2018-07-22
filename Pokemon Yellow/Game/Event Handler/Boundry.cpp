//
//  Boundry.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 7/8/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include "Boundry.hpp"

Boundry::Boundry(double xPos, double yPos, BoundryType boundryType) {
  x = xPos;
  y = yPos;
  type = boundryType;
}

Boundry::~Boundry() { }
