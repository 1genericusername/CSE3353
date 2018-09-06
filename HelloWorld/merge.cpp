#include <merge.h>

Merge::Merge()
{

}

void Merge::execute()
{
    int a[data.size()];
    for(int i=0; i< data.size(); i++){
        a[i] = data[i];
    }
    auto start = std::chrono::high_resolution_clock::now();

    mergeSort(a,0,data.size()-1);

    auto finish = std::chrono::high_resolution_clock::now();

    for(int i=0; i<data.size(); i++){
        data[i] = a[i];
    }

    std::chrono::duration<double> elapsed = finish - start;
    outputfile.open("elapsedtime");
    outputfile << endl << "Algorithm name: Merge Sort" << endl;
    outputfile << "Elapsed time: " << elapsed.count() << "s" << endl;
    outputfile << "Number of records analyzed: " << data.size() << endl;
    outputfile.close();
}

void Merge::merge(int array[], int leftIndex, int pivot, int rightIndex)
{
    int index1;
    int index2;
    int indexMerge;
    int n1 = pivot - leftIndex + 1;
    int n2 =  rightIndex - pivot;
    int leftArray[n1], rightArray[n2];

    for (index1 = 0; index1 < n1; index1++)
        leftArray[index1] = array[leftIndex + index1];

    for (index2 = 0; index2 < n2; index2++)
        rightArray[index2] = array[pivot + 1+ index2];

    index1 = 0;
    index2 = 0;
    indexMerge = leftIndex;

    while (index1 < n1 && index2 < n2){

        if (leftArray[index1] <= rightArray[index2]){
            array[indexMerge] = leftArray[index1];
            index1++;
        }
        else{
            array[indexMerge] = rightArray[index2];
            index2++;
        }
        indexMerge++;
    }

    while (index1 < n1){
        array[indexMerge] = leftArray[index1];
        index1++;
        indexMerge++;
    }

    while (index2 < n2){
        array[indexMerge] = rightArray[index2];
        index2++;
        indexMerge++;
    }
}

void Merge::mergeSort(int array[], int leftIndex, int rightIndex)
{
    int pivot;

    if (leftIndex < rightIndex){

        pivot = leftIndex+(rightIndex-leftIndex)/2;
        mergeSort(array, leftIndex, pivot);
        mergeSort(array, pivot+1, rightIndex);
        merge(array, leftIndex, pivot, rightIndex);
    }
}





