#include "Activity.hpp"
int Activity::nextID = 0;

Activity::Activity(const int athleteID){
	
    this->activityID = ++nextID;
	this->athleteID = athleteID;
	this->activityDistance = new Length(0,0);
    this->isCompleted = false;

}

int Activity::getActivityID() const {

    return this->activityID;
}

int Activity::getAthleteID() const{

    return this->athleteID;
}


void Activity::setActivityCompleted(bool completed){
    this->isCompleted = completed;
}

bool Activity::getActivityCompleted() const{
       
    return this->isCompleted;
}


Activity::~Activity() {

}

