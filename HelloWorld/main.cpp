#include <iostream>
#include <fstream>
//#include <algorithm.h>
#include <sort.h>
#include <search.h>

using namespace std;

int main(int argc, char *argv[])
{
    Algorithm* algorithm;
    algorithm = new Sort;
    algorithm->select(0);
    algorithm->load("20%Unique10");
    algorithm->display();



    /*
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
