#include "race.h"

Race::Race(){
  //Horse horses[HORSECOUNT]; DO NOT MAKE ANOTHER ARRAY IN THE ACTUAL CONSTRUCTOR, IT BREAKS EVERYTHING
  for(int i = 0; i < HORSECOUNT;i++){
    horses[i].init(i,TRACKLENGTH);
    horses[i].getHorse();
  }//end for
}//end constructor

void Race::start(){
  bool keepGoing = true;
  srand(time(NULL));
  while(keepGoing){
    for(int r = 0;r < HORSECOUNT;r++){
      horses[r].advance();
      horses[r].printLane();
      if(horses[r].isWinner()){
        keepGoing = false;
      }//end if
    }//end for
    std::cout << "Press enter for another turn" << std::endl;
    std::cin.ignore();
  }//end while
}//end start
