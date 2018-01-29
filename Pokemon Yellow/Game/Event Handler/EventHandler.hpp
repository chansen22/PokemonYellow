//
//  EventHandler.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef EventHandler_hpp
#define EventHandler_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp> // event?
#include "Eventable.hpp"

class EventHandler {
  std::vector<Eventable *> *eventables;
  sf::RenderWindow *window;
  
public:
  EventHandler(sf::RenderWindow *);
  void addEventable(Eventable *);
  bool handleEvent(sf::Event *);
private:
  void keyPressed(sf::Event *);
  void directionPressed(DirectionEvent);
};

#endif /* EventHandler_hpp */
