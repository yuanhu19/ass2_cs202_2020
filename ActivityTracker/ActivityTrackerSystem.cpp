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

//verify athlete exists in the system
bool ActivityTrackerSystem::verifyAthlete(int athleteID){

    for(unsigned int i=0; i<this->athletes.size();i++){
        if(athletes[i]->getID() == athleteID){
            return true;
        }
    }
    return false;
}



//verify activity exists in the system
bool ActivityTrackerSystem::verifyActivity(int activityID){

    for(unsigned int i=0; i<this->activities.size();i++){
        if(activities[i]->getActivityID() == activityID){
            return true;
        }
    }
    return false;

}

//verify energyGoal exists in the system
bool ActivityTrackerSystem::verifyEnergyGoal(int energyGoalID){
   for(unsigned int i=0; i<this->energyGoals.size();i++){
        if(energyGoals[i]->getGoalID() == energyGoalID){
            return true;
        }
    }
    return false;

}


bool ActivityTrackerSystem::addAthlete(Athlete* athlete){
    if(!verifyAthlete(athlete->getID()))  {
        this->athletes.push_back(athlete);
        return true;
    }

    return false;
}


bool ActivityTrackerSystem::addActivity(Activity* activity){
    if(!verifyActivity(activity->getActivityID()) && verifyAthlete(activity->getAthleteID()))  {
        this->activities.push_back(activity);
        return true;
    }

    return false;
}


bool ActivityTrackerSystem::addEnergyGoal(EnergyGoal* energygoal){
    if(verifyEnergyGoal(energygoal->getGoalID())){
        return false;
    }
    
    if(energygoal->getBudgetCost() <0){

        return false;
    }

    if(energygoal->getTargetEnergy() == 0){
        return false;
    }

    this->energyGoals.push_back(energygoal);
    return true;
}


std::vector<Activity*> ActivityTrackerSystem::getCompletedActivities(){
   
    std::vector<Activity*> completedActivities;
    
    for(unsigned int i = 0; i < this->activities.size();i++){
        //only return the completed activities
        if(this->activities[i]->getActivityCompleted()){
             completedActivities.push_back(activities[i]);     
        }
    }                       
    return completedActivities;
 }


std::vector<Activity*> ActivityTrackerSystem::getPendingActivities(){
    std::vector<Activity*> pendingActivities;

    for(unsigned int i = 0; i < this->activities.size();i++){
        //only return the completed activities
        if(!this->activities[i]->getActivityCompleted()){
            pendingActivities.push_back(activities[i]);     
        }
    }          
    
    return pendingActivities;
}



std::vector<Activity*> ActivityTrackerSystem::getActivities() const{
    return this->activities;
}


std::vector<Athlete*> ActivityTrackerSystem::getAthletes() const{
    return this->athletes;
}
    
std::vector<EnergyGoal*> ActivityTrackerSystem::getEnergyGoals() {
    return this->energyGoals;
}


std::vector<EnergyGoal*> ActivityTrackerSystem::getAchivedEnergyGoals() {

    std::vector<EnergyGoal*> energygoalsAchieved;


    for(int gID=0; gID <= EnergyGoal::getTotalEnergyGoalCount(); gID++){
        for(unsigned int i = 0; i < this->energyGoals.size();i++){
            //only return the completed activities
            if(this->energyGoals[i]->getGoalID() == gID && this->energyGoals[i]->getIsGoalAchieved()){
               
                    energygoalsAchieved.push_back(energyGoals[i]);
                           
            }
        }
    }
    return energygoalsAchieved;
}

ActivityTrackerSystem::~ActivityTrackerSystem(){ 
   //to do 
}