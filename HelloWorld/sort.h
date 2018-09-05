#ifndef SORT_H
#define SORT_H
#include <algorithm.h>

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


};

#endif // SORT_H
