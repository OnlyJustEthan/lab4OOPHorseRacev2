#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <cstdlib>
#include <iostream>

class Horse{
  private:
    int index;
    int trackLength;
    int position;
  public:
    Horse();
    void init(int newIndex, int newTrackLength);
    void getHorse();
    void advance();
    void printLane();
    bool isWinner();
};//end Horse

#endif
