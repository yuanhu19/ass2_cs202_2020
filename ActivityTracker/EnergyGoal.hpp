#ifndef ENERGYGOAL_HPP_
#define ENERGYGOAL_HPP_

#include "Activity.hpp"
#include <vector>
#include <string>

class EnergyGoal {

private:
    double targetEnergy;
    double budgetCost;
    bool goalAchieved;
    std::string name;
    int ID;
    static int nextID;

    std::vector<Activity*> targetActivities;

    EnergyGoal& operator=(const  EnergyGoal &other);
	EnergyGoal(const  EnergyGoal &other);

public:
    
    EnergyGoal(double budgetCost,double targetEnergy);

    std::string getGoalName() const;

    int getID();
    int getTargetEnergy() const;
    double getBudgetCost() const;

    std::vector<Activity*> getTargetActivities();
    void setTargetActivity(Activity* activity);

    bool getGoalAchieved();

    virtual ~EnergyGoal();

};

#endif /* ENERGYGOAL_HPP_ */