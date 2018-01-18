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

class SpriteHandler {
  std::vector<sf::Sprite> *sprites;
  
public:
  SpriteHandler();
  ~SpriteHandler();
  void addSprite(sf::Sprite);
  void drawSpritesInWindow(sf::RenderWindow *window);
};

#endif /* SpriteHandler_hpp */
