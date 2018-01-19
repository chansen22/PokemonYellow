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
  Drawable();
  sf::Sprite getSprite();
};

#endif /* Drawable_hpp */
