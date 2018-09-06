#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class SortAlgorithm{

public:

    SortAlgorithm(){}

    void load(string);

    virtual void execute()=0;

    void display();

    virtual void stats()=0;

    virtual void save(string)=0;

protected:

  vector<int> data;
  ifstream inputfile;

};

#endif // SORTALGORITHM_H
