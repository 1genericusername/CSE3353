#ifndef SORT_H
#define SORT_H
#include <algorithm.h>
#include <bubble.h>
#include <insertion.h>
#include <merge.h>

class Sort: public virtual Algorithm{

public:

    Sort();

    void load(string);

    void execute();

    void display();

    void stats();

    void select(int);

    void save(string);

    void configure();

private:

    SortAlgorithm* sortAlgorithm;
};

#endif // SORT_H
