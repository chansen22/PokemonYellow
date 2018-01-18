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

class EventHandler {
  sf::RenderWindow *window;
public:
  EventHandler(sf::RenderWindow *renderWindow);
  bool handleEvent(sf::Event *);
private:
  void keyPressed(sf::Event *event);
};

#endif /* EventHandler_hpp */
