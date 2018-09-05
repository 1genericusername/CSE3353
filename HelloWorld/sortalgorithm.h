#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class SortAlgorithm{

public:

    SortAlgorithm(){}

    virtual void load(string)=0;

    virtual void execute()=0;

    virtual void display()=0;

    virtual void stats()=0;

    virtual void save(string)=0;

    //void memez(){
      //  cout << "memez";
    //}

private:

  vector<int> data;
  ofstream inputfile;

};

#endif // SORTALGORITHM_H
