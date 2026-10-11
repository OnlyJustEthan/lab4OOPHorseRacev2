#include "horse.h"

Horse::Horse(){
}//end null constructor

void Horse::init(int newIndex, int newTrackLength){
  Horse::position = 0; 
  Horse::index = newIndex;
  Horse::trackLength = newTrackLength;
}//end init

void Horse::getHorse(){
  std::cout << "This horse is horse " << index << std::endl;
  std::cout << "This horse is on a track that is " << trackLength << " spots long" << std::endl;
}//end testing get

void Horse::advance(){
  int movement = (rand() % 2);
  position += movement;
  //std::cout << position << " is new position" << std::endl;
}//end advance

void Horse::printLane(){
  for(int t=0;t<trackLength;t++){
    if(t==position){
      std::cout << index;
    }//end if
    else{
      std::cout << ".";
    }//end else
  }//end for
  std::cout << std::endl;
}//end printLane

bool Horse::isWinner(){
  if(position >= trackLength){
    std::cout << index << " has crossed the finish line!" << std::endl;
    return(true);
  }//end if
  return(false);
}//end isWinner

//Make horse shout it's creations and destructions
