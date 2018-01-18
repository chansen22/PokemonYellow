//
//  Game.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "SpriteHandler.hpp"

class Game {
public:
  Game();
  ~Game();
  void start();
private:
  SpriteHandler *spriteHandler;
};

#endif /* Game_hpp */
