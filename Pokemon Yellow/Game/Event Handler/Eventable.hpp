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

enum DirectionEvent { up, down, left, right };

class Eventable {
public:
  virtual void directionEvent(DirectionEvent) = 0;
};

#endif /* Eventable_hpp */
