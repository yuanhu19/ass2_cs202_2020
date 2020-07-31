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
	Length* activityDistance;
    bool completed;

public:
    //
	Activity(const int athleteID);
    
    virtual double getConsumedEnergy(Length totalDistance) = 0;
    
    virtual Length* getActivityDistance() = 0;

    int getActivityID() const;
    int getAthleteID() const;

    bool getCompleted() const;

	virtual ~Activity();
};

#endif /* ACTIVITY_HPP_ */