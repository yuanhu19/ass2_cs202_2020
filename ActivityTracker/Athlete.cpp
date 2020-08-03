#include "Athlete.hpp"
#include <string>

int Athlete::nextID = 0;


Athlete::Athlete(const std::string &name) {
    this->name = name;
    this->ID = ++nextID;
}


std::string Athlete::getName(){
    return this->name;
}

int Athlete::getID(){
    return this->ID;
}

Athlete::~Athlete(){

}

