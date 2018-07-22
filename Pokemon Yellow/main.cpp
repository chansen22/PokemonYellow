
//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include "Game.hpp"

#import <iostream>
#import <map>
#import <iterator>

using namespace std;
int main(int, char const**) {
  Game *game = new Game();
  game->start();
  
  delete game;
  return EXIT_SUCCESS;
}
