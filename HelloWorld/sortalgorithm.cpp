#include <sortalgorithm.h>


void SortAlgorithm::load(string filename)
{
    string line;
    int temp;
    inputfile.open(filename);
    cout << endl << "Loading file: \"" << filename <<"\" ..." << endl ;

    if(inputfile.is_open()){

        while(getline(inputfile,line)){
            //cout << line << endl;
            temp = stoi(line,nullptr,10);
            data.push_back(temp);
        }
    }

    else cout << "unable to open file";



}

void SortAlgorithm::display()
{
    for(int i=0; i<data.size(); i++){
        cout << data[i] << " ";
    }
}
