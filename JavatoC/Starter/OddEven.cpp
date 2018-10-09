/*
 * Java: Program compiled and ran fine. It output a list of 4 odd numbers on the left and 4 even numbers on the right. 
 * C++: I get a collection of very large and very small numbers in the cout statement.  
 * C++ Explanation: C++ cannot find any data beyond the first element of the array. 
 */
#include <iostream>
using namespace std;

int* doReturn(int ret[]){
    return ret;
}

int* oddNumbers() {
    int numbers[] = {1, 3, 5, 7};
    return doReturn(numbers);
}

int* evenNumbers() {
    int numbers[] = {2, 4, 6, 8};
    return doReturn(numbers);
}


int main() {
    int* odd = oddNumbers();
    int* even = evenNumbers();

    for (int i = 0; i < 4; i ++) {
        cout << odd[i] << " " << even[i] << endl;
    }
}



