#include <insertion.h>

Insertion::Insertion()
{

}

void Insertion::execute()
{
    auto start = std::chrono::high_resolution_clock::now();

    if(data.size() > 1){
        int size = data.size();
        for(int i = 1; i < size; ++i){
          int j = i - 1;
          int temp = data[i];
          while(j >= 0 && data[j] > temp){
            data[j+1] = data[j];
            --j;
          }
          data[j+1] = temp;
        }
      }

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    outputfile.open("elapsedtime");
    outputfile << endl << "Algorithm name: Insertion Sort" << endl;
    outputfile << "Elapsed time: " << elapsed.count() << "s" << endl;
    outputfile << "Number of records analyzed: " << data.size() << endl;
    outputfile.close();
}

