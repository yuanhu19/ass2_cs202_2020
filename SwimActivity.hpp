#ifndef SWIMACTIVITY_HPP_
#define SWIMACTIVITY_HPP_
#include "Length.hpp"
#include "Activity.hpp"
#include <vector>
#include <iostream>

class SwimActivity : public Activity{

private:
    
   
    int laps;
    Length* poolLength;

    Length* swimDistance;
    
    SwimActivity& operator=(const SwimActivity &other);
	SwimActivity(const  SwimActivity &other);


public:

    SwimActivity(const int athleteID);
    
    Length* getActivityDistance();
    
    double getConsumedEnergy();
    
    
};




#endif /* SWIMMINGACTIVITY_HPP_ */