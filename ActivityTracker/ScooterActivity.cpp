#include "ScooterActivity.hpp"

ScooterActivity::ScooterActivity(const int athleteID) : Activity(athleteID){
  this->scooterDistance = new Length(0,0);
}
    
Length* ScooterActivity::getActivityDistance(){
    return this-> scooterDistance;
}

bool ScooterActivity::setScooterDistance(std::vector<Length> routeLengths){
  for (unsigned int i = 0; i < routeLengths.size(); i++){ 
    if (routeLengths[i].asInches() >=0){
    this->scooterDistance->add(routeLengths[i]);}
    else
    {
      return false;
    }   
  }
    return true;
}

Length* ScooterActivity::getActivityDistance(){
    
  return this-> scooterDistance;
}

//cost of scooterActivity can be $5 fix plus $1 per10000inches
double ScooterActivity::getActivityCost(){
  this->activityCost = 5 + this->scooterDistance->asInches()*0.0001;
  return this->activityCost;
}


//energy consumption of scooterActivity can be 2 units calories per 10000inches
double ScooterActivity::getConsumedEnergy(){

  this->energyConsumed = this->scooterDistance->asInches()*0.0002;
  return energyConsumed;

}