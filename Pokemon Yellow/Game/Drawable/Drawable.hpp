//
//  Drawable.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef Drawable_hpp
#define Drawable_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

class Drawable {
  sf::Texture texture;
  sf::Sprite sprite;
public:
  double x = 0;
  double y = 0;
  
  Drawable();
  virtual sf::Sprite getSprite() = 0;
  virtual void stepSprite() = 0;
};

#endif /* Drawable_hpp */
