//
//  Eventable.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/21/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef Eventable_hpp
#define Eventable_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "Boundry.hpp"

enum DirectionEvent { up, down, left, right };

class Eventable {
public:
  std::vector<Boundry *> *boundries;
  virtual void directionEvent(DirectionEvent, void *) = 0;
  virtual bool canMove(DirectionEvent, void *) = 0;
};

#endif /* Eventable_hpp */
