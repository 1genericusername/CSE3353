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
    if(selection == 0){
        sortAlgorithm = new Bubble;
        cout << "Bubble Sort Selected..." << endl;
    }
    else if(selection == 1){
        sortAlgorithm = new Insertion;
        cout << "Insertion Sort Selected..."<< endl;
    }
    else if(selection == 2){
        sortAlgorithm = new Merge;
        cout << "Merge Sort Selected" << endl;
    }
}

void Sort::save(string filename)
{
    sortAlgorithm->save(filename);
}

void Sort::configure()
{

}
