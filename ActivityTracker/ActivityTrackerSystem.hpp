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
    std::vector<EnergyGoal*> energyGoals;

public:
    ActivityTrackerSystem();
    static std::string author();
    
    //Return vector of completed activities

    bool addAthletes(Athlete* athlete);
    bool addActivity(Activity* activity);
    bool addEnergyGoal(EnergyGoal* energygoal);
    
    std::vector<Activity*> getCompletedActivities();

    //Return vector of pending activities
    std::vector<Activity*> getPendingActivities();

    //Return vector of target activities
    std::vector<Activity*> getActivities() const;

    std::vector<Athlete*> getAthletes() const;

    //Return vector of targetGoals
    std::vector<EnergyGoal*> getEnergyGoals() const;

    //Return vector of targetGoals depending on whether achieved
    std::vector<EnergyGoal*> getEnergyGoals(bool goalAchieved) const;


virtual ~ActivityTrackerSystem();

};




#endif /* ACTIVITYTRACKERSYSTEM_HPP_ */