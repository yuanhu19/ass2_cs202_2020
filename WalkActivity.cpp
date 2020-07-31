#include "WalkActivity.hpp"

WalkActivity::WalkActivity(const int athleteID) : Activity(athleteID){
  this->walkDistance = new Length(0,0);
}
    

    
std::vector<Length*> WalkActivity::getRouteLength(){

}


Length* WalkActivity::getActivityDistance(){
    

}

double WalkActivity::getConsumedEnergy(){

}