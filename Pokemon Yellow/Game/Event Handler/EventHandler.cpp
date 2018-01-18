//
//  EventHandler.cpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/17/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#include "EventHandler.hpp"


EventHandler::EventHandler(sf::RenderWindow *renderWindow) {
  this->window = renderWindow;
}

bool EventHandler::handleEvent(sf::Event *event) {
  switch (event->type) {
    case sf::Event::Closed:
      this->window->close();
      break;
    case sf::Event::KeyPressed:
      keyPressed(event);
      break;
    case sf::Event::Resized:
      // resized window
      break;
    case sf::Event::LostFocus:
    case sf::Event::GainedFocus:
    case sf::Event::TextEntered:
    case sf::Event::KeyReleased:
    case sf::Event::MouseWheelMoved:
    case sf::Event::MouseWheelScrolled:
    case sf::Event::MouseButtonPressed:
    case sf::Event::MouseButtonReleased:
    case sf::Event::MouseMoved:
    case sf::Event::MouseEntered:
    case sf::Event::MouseLeft:
    case sf::Event::JoystickButtonPressed:
    case sf::Event::JoystickButtonReleased:
    case sf::Event::JoystickMoved:
    case sf::Event::JoystickConnected:
    case sf::Event::JoystickDisconnected:
    case sf::Event::TouchBegan:
    case sf::Event::TouchMoved:
    case sf::Event::TouchEnded:
    case sf::Event::SensorChanged:
      break;
    case sf::Event::Count:
      break;
  }
  return true;
}

void EventHandler::keyPressed(sf::Event *event) {
  if (event->key.code == sf::Keyboard::Escape) {
    this->window->close();
  }
}
