#include "sorting.hpp"

/**
 * Documentation should go here.
 */
void Sort::InsertionSort(){
    std::cout<<"Sorting the array using insertion sort.\n";

    f(i, unsorted.size())
        sorted.push_back(unsorted[i]);

    f(i, sorted.size()){
        int target = i;
        f(j,i){
            if(sorted[i-1-j]>sorted[i])
                target = i-1-j;
        }

        int temp = sorted[i];
        for(int j=i ; j>target; j--)
            sorted[j] = sorted[j-1];
        sorted[target] = temp;
    }
}