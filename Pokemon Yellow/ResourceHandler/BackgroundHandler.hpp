//
//  BackgroundHandler.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 7/8/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef BackgroundHandler_hpp
#define BackgroundHandler_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

#include "Drawable.hpp"

class BackgroundHandler {
  std::vector<Drawable *> *drawables;
  
public:
  BackgroundHandler();
  ~BackgroundHandler();
  void addDrawable(Drawable *);
  void drawInWindow(sf::RenderWindow *);
  void stepSprites();
};

#endif /* BackgroundHandler_hpp */
