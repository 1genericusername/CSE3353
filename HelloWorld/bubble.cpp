#include <bubble.h>

Bubble::Bubble()
{

}

/*
void Bubble::load(string)
{

}
*/

void Bubble::execute()
{
    auto start = std::chrono::high_resolution_clock::now();

    bool hasSwapped = true;
          int j = 0;
          int temp;
          while (hasSwapped == true) {
                hasSwapped = false;
                j++;
                for (int i = 0; i < data.size() - j; i++) {
                      if (data[i] > data[i + 1]) {
                            temp = data[i];
                            data[i] = data[i + 1];
                            data[i + 1] = temp;
                            hasSwapped = true;
                      }
                }
          }

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    outputfile.open("elapsedtime");
    outputfile << endl << "Algorithm name: Bubble Sort" << endl;
    outputfile << "Elapsed time: " << elapsed.count() << "s" << endl;
    outputfile << "Number of records analyzed: " << data.size() << endl;
    outputfile.close();
}

/*
void Bubble::display()
{
    cout << "bubble";
}
*/
/*
void Bubble::stats()
{

}
*/
/*
void Bubble::save(string)
{

}
*/
