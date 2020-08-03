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


}


int EnergyGoal::getTargetEnergy() const{


}
    
double EnergyGoal::getBudgetCost() const{


}

std::vector<Activity*> EnergyGoal::getTargetActivities(){

}
    
void EnergyGoal::setTargetActivity(Activity* activity){


}

bool EnergyGoal::getGoalAchieved(){

}

int EnergyGoal::getID(){
	return this->ID;
}

EnergyGoal:: ~EnergyGoal(){

}