#ifndef SEARCH_H
#define SEARCH_H
#include <algorithm.h>

class Search: public virtual Algorithm{

public:

    Search();

    void load(string);

    void execute();

    void display();

    void stats();

    void select(int);

    void save(string);

    void configure();
};

#endif // SEARCH_H
