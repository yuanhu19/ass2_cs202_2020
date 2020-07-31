#include "Activity.hpp"
int Activity::nextID = 0;

Activity::Activity(const int athleteID){
	this->activityID = ++nextID;
	this->athleteID = athleteID;
	this->distance = new Length(0,0);

}

int Activity::getActivityID() const {

    return this->activityID;
}

int Activity::getAthleteID() const{

    return this->athleteID;
}


bool Activity::getCompleted() const{
    return -1;
}


Activity::~Activity() {

}

