#ifndef WALKACTIVITY_HPP_
#define WALKACTIVITY_HPP_
#include "Length.hpp"
#include "Activity.hpp"
#include <vector>
#include <iostream>

class WalkActivity : public Activity{

private:
    
    Length* walkDistance;
    std::vector<Length*> routeLength;
    
    double energy;
    WalkActivity& operator=(const  WalkActivity &other);
	WalkActivity(const  WalkActivity &other);

public:

    WalkActivity(const int athleteID);
    
    Length* getActivityDistance();
    
    double getConsumedEnergy();
    
    std::vector<Length*> getRouteLength();
};




#endif /* WALKACTIVITY_HPP_ */