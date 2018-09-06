#include <iostream>
#include <fstream>
//#include <algorithm.h>
#include <sort.h>
#include <search.h>

using namespace std;

int main(int argc, char *argv[])
{
    string filenames[]= {"20%unique10", "20%unique1000", "20%unique10000", "20%unique100000", "30%Random10", "30%Random1000", "30%Random10000", "30%Random100000",
                        "Random10", "Random1000", "Random10000", "Random100000", "ReversedSorted10", "ReversedSorted1000" , "ReversedSorted10000" , "ReversedSorted100000" };

    int algorithms[] = {0, 1, 2}; //0 = Bubble, 1 = Insertion, 2 = Merge

    string outputFilenames[]= {"20%unique10sorted", "20%unique1000sorted", "20%unique10000sorted", "20%unique100000sorted", "30%Random10sorted", "30%Random1000sorted", "30%Random10000sorted", "30%Random100000sorted",
                        "Random10sorted", "Random1000sorted", "Random10000sorted", "Random100000sorted", "ReversedSorted10sorted", "ReversedSorted1000sorted", "ReversedSorted10000sorted" , "ReversedSorted100000" };
    for(int i=0; i<3; i++){
        Algorithm* algorithm;
        algorithm = new Sort;
        algorithm->select(i);

        for(int j=0; j< 16; j++){
            algorithm->load(filenames[j]);
            algorithm->execute();
            //algorithm->display();
            algorithm->stats();
            algorithm->save(outputFilenames[j]);
        }
    }


    /* Junk used to create data sets
    ofstream myfile;
    myfile.open("30%Random100000");

    int num;

    for(int i = 100000; i > 0; i--){

        num = rand() % 100000 + 1;
        myfile << num;

        //myfile << i;
        //if(i > 1)
            //myfile << "\n";

        if( i <= 30000){
            num = rand() % i + 1;
            myfile << num << "\n";

        }
        else
            myfile << i << "\n";
    }
    */
}
