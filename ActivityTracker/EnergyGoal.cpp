# include "EnergyGoal.hpp"
#include <string>
int EnergyGoal::nextID = 1;

EnergyGoal::EnergyGoal(double budgetCost,double targetEnergy) {

    this->budgetCost = budgetCost;
    this->targetEnergy = targetEnergy;
    this->ID = ++nextID;
    this->goalAchieved = false;
   
}


std::string EnergyGoal::getGoalName() const{
    return this->name;
}


int EnergyGoal::getTargetEnergy() const{
 return this->targetEnergy;
}
    
double EnergyGoal::getBudgetCost() const{
    return this->budgetCost;
}

bool EnergyGoal::setTargetActivitiesSuccessfully(std::vector<Activity*> targetActivities){
 
    int size = targetActivities.size();
    double totalEnergy = 0;
    double totalCost = 0;

    std::vector<Activity*> activities;

    for(unsigned int i = 0; i<size; i++){

    activities.push_back(targetActivities[i]);
    totalEnergy += targetActivities[i]->getConsumedEnergy();
    totalCost += targetActivities[i]->getActivityCost();}

    if(totalEnergy >= this->targetEnergy && totalCost <= this->budgetCost){
        for(unsigned int i = 0; i<size; i++){

            this->targetActivities.push_back(targetActivities[i]);
        }

        return true;
    }
        return false;
}

std::vector<Activity*> EnergyGoal::getTargetActivities(){
    return this->targetActivities;
}
    
    
bool EnergyGoal::setGoalAchieved(bool achieved){
    this->goalAchieved = achieved;
    return this->goalAchieved;
}

int EnergyGoal::getID(){
	return this->ID;
}

EnergyGoal:: ~EnergyGoal(){

}