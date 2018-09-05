#ifndef MERGE_H
#define MERGE_H
#include <sortalgorithm.h>

class Merge: public virtual SortAlgorithm{

public:

    Merge();

    void load(string);

    void execute();

    void display();

    void stats();

    void save(string);
};

#endif // MERGE_H
