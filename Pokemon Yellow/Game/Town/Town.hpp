//
//  Town.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/28/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef Town_hpp
#define Town_hpp

#include <stdio.h>
#include "Background.hpp"
#include "Eventable.hpp"

enum TownName { PalletTown, ViridianTown };

class Town: Background, Eventable {
  void setup();
public:
  TownName townName;
  
  double x = 0;
  double y = 0;
  int width;
  int height;
  std::string imageString;
  
  sf::Texture texture;
  sf::Sprite sprite;
  
  Town(TownName name);
  
  void setupBoundries();

  sf::Sprite getSprite();
  void stepSprite();
  
  void directionEvent(DirectionEvent, void *);
  bool canMove(DirectionEvent, void *);
};

#endif /* Town_hpp */
