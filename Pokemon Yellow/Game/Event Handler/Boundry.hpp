//
//  Boundry.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 7/8/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef Boundry_hpp
#define Boundry_hpp

#include <stdio.h>

enum BoundryType { wall, stair, door };

class Boundry {
public:
  BoundryType type;
  double x;
  double y;
  
  Boundry(double xPos, double yPos, BoundryType boundryType);
  ~Boundry();
};

#endif /* Boundry_hpp */
