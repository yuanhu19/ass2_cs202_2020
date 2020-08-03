#include <string>
#ifndef ATHLETE_HPP_
#define ATHLETE_HPP_


class Athlete {

private:
    std::string name;
    int ID;
    static int nextID;

    Athlete& operator=(const Athlete &other);
    Athlete(const Athlete &other);

public:
    Athlete(const std::string &name);
    std::string getName();
    int getID();
    
    virtual ~Athlete();

};


#endif /* ATHLETE_HPP_ */