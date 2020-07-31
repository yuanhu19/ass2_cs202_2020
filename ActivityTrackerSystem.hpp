#ifndef ACTIVITYTRACKERSYSTEM_HPP_
#define ACTIVITYTRACKERSYSTEM_HPP_

#include "Athlete.hpp"
#include "Activity.hpp"
#include "EnergyGoal.hpp"
#include "Length.hpp"

#include <vector>
#include <iostream>

class ActivityTrackerSystem {

private:

    std::vector<Activity*> activities;
    std::vector<Athlete*> athletes;
    std::vector<EnergyGoal*> engergyGoals;

public:
    ActivityTrackerSystem();
    static std::string author();
    //Return vector of completed activities
    std::vector<Activity*> getCompletedActivities();

    //Return vector of pending activities
    std::vector<Activity*> getPendingActivities();

    std::vector<Activity*> getActivities() const;
    std::vector<Athlete*> getAthletes() const;
    std::vector<EnergyGoal*> getEngergyGoals() const;

    //Return vector of targetGoals depending on whether achieved
    std::vector<EnergyGoal*> getEngergyGoals(bool goalAchieved) const;


virtual ~ActivityTrackerSystem();

};




#endif /* ACTIVITYTRACKERSYSTEM_HPP_ */