#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H
#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
using namespace std;

class SortAlgorithm{

public:

    SortAlgorithm(){}

    void load(string);

    virtual void execute()=0;

    void display();

    void stats();

    void save(string);

protected:

  vector<int> data;
  ifstream inputfile;
  ofstream outputfile;

};

#endif // SORTALGORITHM_H
