#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <string>
using namespace std;

class Algorithm{

    public:

    Algorithm(){}

    virtual void load(string)=0;

    virtual void execute()=0;

    virtual void display()=0;

    virtual void stats()=0;

    virtual void select(int)=0;

    virtual void save(string)=0;

    virtual void configure()=0;
};
#endif // ALGORITHM_H
