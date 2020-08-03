#ifndef SCOOTERACTIVITY_HPP_
#define SCOOTERACTIVITY_HPP_
#include "Length.hpp"
#include "Activity.hpp"
#include <vector>
#include <iostream>

class ScooterActivity : public Activity{

private:
    
   
    std::vector<Length*> routeLength;

    Length* scooterDistance;
    
    ScooterActivity& operator=(const ScooterActivity &other);
	ScooterActivity(const  ScooterActivity &other);


public:

    ScooterActivity(const int athleteID);
    
    Length* getActivityDistance();
    double getConsumedEnergy(Length totalDistance);
    
    
};




#endif /* SCOOTERACTIVITY_HPP_ */