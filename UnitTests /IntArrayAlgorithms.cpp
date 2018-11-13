#include "IntArrayAlgorithms.hpp"
#include "IntArray.hpp"
#include <iostream>

void IntArrayAlgorithms::swap(IntArray & lhs, IntArray & rhs) {
    if(lhs!=rhs) {
        //allocate a temp array on the heap
        int* temp = new int[lhs.size()];
        for(int i = 0; i < lhs.size(); i++) {
            temp[i] = lhs[i];
        } 

        for(int i = 0; i < lhs.size(); i++){
            if(i < rhs.size()) {
                lhs[i] = rhs[i];
            }
        }

        for(int i = 0; i < rhs.size(); i++){
            if(i < lhs.size()) {
                rhs[i] = temp[i];
            }
        }

        delete[] temp;
    }
}



bool IntArrayAlgorithms::contains(const IntArray & arr, int val) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == val) {
            return true;
        }
    }
    return false;
}

//Note, heavily influenced from two insertion sort articles online. 
//I googled a lot of things in order to see how to implement this
void IntArrayAlgorithms::sort(IntArray & arr) {
    int toSwap; 
    int previous;

    //find the current integer to swap back
    for (int i = 1; i < arr.size(); i++) { 
        toSwap = arr[i]; 
        previous = i-1; 
        
        //compare the integer to swap back and swap if needed
        while (previous >= 0 && arr[previous] > toSwap) { 
            arr[previous+1] = arr[previous]; 
            previous = previous-1; 
        } 
        arr[previous+1] = toSwap; 
    }
}

int IntArrayAlgorithms::sum(const IntArray & arr) {
    if (arr.size() == 0) {
        return 0;
    } else {
        int sum = 0;
        for(int i = 0; i < arr.size(); i++) {
            sum+= arr[i];
        }
        return sum;
    }
}

int IntArrayAlgorithms::product(const IntArray & arr) {
    if(arr.size() == 0) {
        return 0;
    }

    int product = 1;
    for(int i = 0; i < arr.size(); i++) {
        product *= arr[i];
    }
    return product;

}
