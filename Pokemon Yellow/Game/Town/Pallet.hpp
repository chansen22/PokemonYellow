//
//  Pallet.hpp
//  Pokemon Yellow
//
//  Created by Christopher Hansen on 1/28/18.
//  Copyright © 2018 Christopher Hansen. All rights reserved.
//

#ifndef Pallet_hpp
#define Pallet_hpp

#include <stdio.h>
#include "Town.hpp"

class Pallet: Town {
  typedef Town super;
  void setup();
  void addWalls();
public:
  std::vector<std::vector<Boundry *>> *boundries;
  Pallet(TownName name);
  ~Pallet();
  void setupBoundries();
  bool canMove(DirectionEvent, void *);
};

#endif /* Pallet_hpp */
