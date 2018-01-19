//
//  SpriteHandler.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef SpriteHandler_hpp
#define SpriteHandler_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

#include "Drawable.hpp"

class SpriteHandler {
  std::vector<Drawable *> *drawables;
  
public:
  SpriteHandler();
  ~SpriteHandler();
  void addDrawable(Drawable *);
  void drawInWindow(sf::RenderWindow *window);
  void stepSprites();
};

#endif /* SpriteHandler_hpp */
