#ifndef INSERTION_H
#define INSERTION_H
#include <sortalgorithm.h>

class Insertion: public virtual SortAlgorithm{

public:

    Insertion();

    void load(string);

    void execute();

    void display();

    void stats();

    void save(string);
};

#endif // INSERTION_H
