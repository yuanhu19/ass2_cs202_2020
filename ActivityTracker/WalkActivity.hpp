#ifndef WALKACTIVITY_HPP_
#define WALKACTIVITY_HPP_
#include "Length.hpp"
#include "Activity.hpp"
#include <vector>
#include <iostream>

class WalkActivity : public Activity{

private:
    
    Length* walkDistance;
    
    WalkActivity& operator=(const  WalkActivity &other);
	WalkActivity(const  WalkActivity &other);

public:

    WalkActivity(const int athleteID);
    
    bool setWalkDistance(std::vector<Length> routeLengths);
    
    Length* getActivityDistance();
    
    double getActivityCost();

    double getConsumedEnergy();

    virtual ~WalkActivity();
};




#endif /* WALKACTIVITY_HPP_ */