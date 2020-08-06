#include "WalkActivity.hpp"

WalkActivity::WalkActivity(const int athleteID) : Activity(athleteID){
  this->walkDistance = new Length(0,0);
}
    
bool WalkActivity::setWalkDistance(std::vector<Length> routeLengths){
  
  for (unsigned int i = 0; i < routeLengths.size(); i++){ 
    if (routeLengths[i].asInches() >=0){
    this->walkDistance->add(routeLengths[i]);}
    else
    {
      return false;
    }   
  }
    return true;
}

Length* WalkActivity::getActivityDistance(){
  return this->walkDistance;
}

//energy consumption of scooterActivity can be 1 unit of calory per 1000inches
double WalkActivity::getConsumedEnergy(){
  
  this->energyConsumed = this->walkDistance->asInches()*0.001;
  return energyConsumed;
}

// no cost for walking
double WalkActivity::getActivityCost(){
   this->activityCost = 0;
   return activityCost;

}

WalkActivity::~WalkActivity(){
 //
}