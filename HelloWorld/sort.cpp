#include <sort.h>

Sort::Sort()
{

}

void Sort::load(string filename)
{
    sortAlgorithm->load(filename);
}

void Sort::execute()
{
    sortAlgorithm->execute();
}

void Sort::display()
{
    sortAlgorithm->display();
}

void Sort::stats()
{
    sortAlgorithm->stats();
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

void Sort::save(string filename)
{
    sortAlgorithm->save(filename);
}

void Sort::configure()
{

}
