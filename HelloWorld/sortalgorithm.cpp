#include <sortalgorithm.h>

void SortAlgorithm::load(string filename)
{
    data.clear();
    string line;
    int temp;
    inputfile.open(filename);
    cout << endl << "Loading file: \"" << filename <<"\" ..." << endl ;

    if(inputfile.is_open()){

        while(getline(inputfile,line)){
            temp = stoi(line,nullptr,10);
            data.push_back(temp);
        }
        inputfile.close();
    }
    else cout << "unable to open file";
}

void SortAlgorithm::display()
{
    for(int i=0; i<data.size(); i++){
        cout << data[i] << " ";
    }
}

void SortAlgorithm::stats()
{
    inputfile.open("elapsedtime");

    string line;

    if(inputfile.is_open()){

        while(getline(inputfile,line)){
            cout << line << endl;
        }
        inputfile.close();
    }
    else cout << "unable to open file";
}

void SortAlgorithm::save(string filename)
{
    outputfile.open(filename);

    for(int i=0; i<data.size(); i++){
        outputfile << data[i] << endl;
    }
    outputfile.close();
}
