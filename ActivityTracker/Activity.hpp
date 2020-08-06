#ifndef ACTIVITY_HPP_
#define ACTIVITY_HPP_
#include "Length.hpp"

class Activity{

private:
    int activityID;
    int athleteID;
    static int nextID;

    Activity& operator=(const  Activity &other);
	Activity(const  Activity &other);

protected:
    
    double energyConsumed;
	Length* activityDistance;
    bool isCompleted;
    double activityCost;

public:
    
	Activity(const int athleteID);
    
    virtual double getConsumedEnergy() = 0;
    virtual double getActivityCost() = 0;
    virtual Length* getActivityDistance() = 0;

    int getActivityID() const;
    int getAthleteID() const;

    bool setActivityCompleted() const;
    bool getActivityCompleted() const;


	virtual ~Activity();
};

#endif /* ACTIVITY_HPP_ */