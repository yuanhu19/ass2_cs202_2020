#ifndef SCOOTERACTIVITY_HPP_
#define SCOOTERACTIVITY_HPP_
#include "Length.hpp"
#include "Activity.hpp"
#include <vector>
#include <iostream>

class ScooterActivity : public Activity{

private:   

    Length* scooterDistance;
    
    ScooterActivity& operator=(const ScooterActivity &other);
	ScooterActivity(const  ScooterActivity &other);


public:

    ScooterActivity(const int athleteID);

    std::vector<Length*> getRouteLengths();
    
    void setScooterDistance(std::vector<Length> routeLengths);

    Length* getActivityDistance();
    
    double getActivityCost();

    double getConsumedEnergy();
    
    
};




#endif /* SCOOTERACTIVITY_HPP_ */