#ifndef MERGE_H
#define MERGE_H
#include <sortalgorithm.h>

class Merge: public virtual SortAlgorithm{

public:

    Merge();

    //void load(string);

    void execute();

    //void display();

    //void stats();

    //void save(string);

//private:
    void mergeSort(int[], int, int);
    void merge(int[],int l, int m, int r);

};

#endif // MERGE_H
