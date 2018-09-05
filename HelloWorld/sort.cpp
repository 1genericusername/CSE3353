#include <sort.h>

Sort::Sort()
{

}

void Sort::load(string)
{

}

void Sort::execute()
{

}

void Sort::display()
{
    sortAlgorithm->display();
}

void Sort::stats()
{

}

void Sort::select(int selection)
{
    if(selection == 0)

        sortAlgorithm = new Bubble;

    else if(selection == 1)

        sortAlgorithm = new Insertion;

    else if(selection == 2)

        sortAlgorithm = new Merge;

}

void Sort::save(string)
{

}

void Sort::configure()
{

}
