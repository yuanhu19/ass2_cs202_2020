#ifndef WALKINGACTIVITY_HPP_
#define WALKINGACTIVITY_HPP_
#include "Length.hpp"
#include "Activity.hpp"
#include <vector>
#include <iostream>

class WalkingActivity : public Activity{

private:
    
    double energyWalk;
    std::vector<Length*> routeLength;
    
    WalkingActivity& operator=(const  WalkingActivity &other);
	WalkingActivity(const  WalkingActivity &other);

public:

    WalkingActivity(const int athleteID);
    
    Length getDistance();
    double getConsumedEnergy(Length totalDistance);
    
    std::vector<Length*> getRouteLength();
};




#endif /* WALKINGACTIVITY_HPP_ */