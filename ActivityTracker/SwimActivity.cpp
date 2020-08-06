#include "SwimActivity.hpp"

SwimActivity::SwimActivity(const int athleteID) : Activity(athleteID){
  this->swimDistance = new Length(0,0);
  this->laps = 0;
  this->poolLength = new Length(0,0);
}
    
bool SwimActivity::setSwimDistance(int laps, Length poolLength){ 
  if(laps>0){
    this->swimDistance->addInches(laps*(poolLength.asInches()));
  return true;}
  else
  {
    return false;
  }
  
}


Length* SwimActivity::getActivityDistance(){
   
   return this->swimDistance;

}

//energy consumption of swimActivity can be 4 units of calories per 1000inches
double SwimActivity::getConsumedEnergy(){

  this->energyConsumed = this->swimDistance->asInches()*0.004;
  return energyConsumed;

}

//cost of swimActivity can be  $5 per10000inches
double SwimActivity::getActivityCost(){
   this->activityCost = this->swimDistance->asInches()*0.0005;
   return activityCost;
}