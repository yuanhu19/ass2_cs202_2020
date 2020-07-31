#ifndef ACTIVITY_HPP_
#define ACTIVITY_HPP_
#include "Length.hpp"

class Activity{

private:
    int activityID;
    int athleteID;
    static int nextID;
    
    double cost;
    double energy;
	
  

    Activity& operator=(const  Activity &other);
	Activity(const  Activity &other);

protected:
	Length* distance;
    bool completed;

public:
    //
	Activity(const int athleteID);
    
    virtual double getConsumedEnergy(Length totalDistance) = 0;
    
    virtual Length getDistance() = 0;

    bool getCompleted();

	virtual ~Activity();
};

#endif /* ACTIVITY_HPP_ */