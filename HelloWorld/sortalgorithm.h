#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H
#include <iostream>
using namespace std;

class SortAlgorithm{

public:

    SortAlgorithm(){}

    virtual void load(string)=0;

    virtual void execute()=0;

    virtual void display()=0;

    virtual void stats()=0;

    virtual void save(string)=0;

};

#endif // SORTALGORITHM_H
