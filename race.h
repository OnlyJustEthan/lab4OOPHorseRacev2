#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "horse.h"

class Race{
  private:
    const static int TRACKLENGTH = 15;
    const static int HORSECOUNT = 5;
    Horse horses[HORSECOUNT];
  public:
    Race();
    void start();
};//end Race class

#endif
