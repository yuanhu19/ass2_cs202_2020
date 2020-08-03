#include "ScooterActivity.hpp"

ScooterActivity::ScooterActivity(const int athleteID) : Activity(athleteID){
  this->scooterDistance = new Length(0,0);
}
    

    
std::vector<Length*> ScooterActivity::getRouteLength(){

}


Length* ScooterActivity::getActivityDistance(){
    

}

double ScooterActivity::getConsumedEnergy(){

}