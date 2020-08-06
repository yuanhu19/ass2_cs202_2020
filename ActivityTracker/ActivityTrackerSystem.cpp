#include "ActivityTrackerSystem.hpp"
#include <vector>
#include <iostream>
#include <string>


ActivityTrackerSystem::ActivityTrackerSystem() {
    //TO DO
}

std::string ActivityTrackerSystem::author(){
    return "aaaa111";
}

bool ActivityTrackerSystem::addAthletes(Athlete* athlete){
    //todo
}
bool ActivityTrackerSystem::addActivity(Activity* activity){
    //todo
}
bool ActivityTrackerSystem::addEnergyGoal(EnergyGoal* energygoal){
    //todo
}


std::vector<Activity*> ActivityTrackerSystem::getCompletedActivities(){
   
    std::vector<Activity*> completedActivities;
    //TO DO
    return completedActivities;
 }


std::vector<Activity*> ActivityTrackerSystem::getPendingActivities(){
    std::vector<Activity*> pendingActivities;
    //TO DO
    return pendingActivities;

}

std::vector<Activity*> ActivityTrackerSystem::getActivities() const{
    return this->activities;
}


std::vector<Athlete*> ActivityTrackerSystem::getAthletes() const{
    return this->athletes;
}
    
std::vector<EnergyGoal*> ActivityTrackerSystem::getEnergyGoals() const{
    return this->energyGoals;
}


std::vector<EnergyGoal*> ActivityTrackerSystem::getEnergyGoals(bool goalAchieved) const{
    
    return this->energyGoals;
}

 ActivityTrackerSystem::~ActivityTrackerSystem(){

 }