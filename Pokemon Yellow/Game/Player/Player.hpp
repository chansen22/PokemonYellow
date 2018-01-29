//
//  Player.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "Drawable.hpp"
#include "Eventable.hpp"

class Player: Drawable, Eventable {
public:
  double x = 0;
  double y = 0;
  std::string imageString;
  int step = 1;

  Player();
  ~Player();
  
  sf::Sprite getSprite();
  void stepSprite();
  void directionEvent(DirectionEvent);
private:
  sf::Sprite sprite;
  sf::Texture texture;
  
  void setup();
};

#endif /* Player_hpp */
