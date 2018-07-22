//
//  Background.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/28/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef Background_hpp
#define Background_hpp

#include <stdio.h>
#include "Drawable.hpp"

class Background: Drawable {
public:
  sf::Texture texture; 
  sf::Sprite sprite;

  double x = 0;
  double y = 0;

  virtual sf::Sprite getSprite() = 0;
  virtual void stepSprite() = 0;
};

#endif /* Background_hpp */
