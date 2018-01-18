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

class Player {
public:
  double x = 0;
  double y = 0;

  Player();
  ~Player();
  
  sf::Sprite getSprite(); // i think sprite is getting null'd? or falling out of scope after our init?
private:
  sf::Sprite sprite;
  sf::Texture texture;
  
  void setup();
};

#endif /* Player_hpp */
