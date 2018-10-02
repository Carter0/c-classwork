/*
 * Java: prints out the numbers from -1 to -8.
 * C++: It outputs -1, -2, -3, -4, and then repeats itself so no -5 through -8 
 * C++ Explanation: The argument for the function displayBoth asks for an array, but it is passed a pointer instead.  
 */
#include <iostream>
#include<string.h>
using namespace std;

int* numbers() {
    int numbers[] = {-5, -6, -7, -8};
    int* ret = numbers;
    return ret;
}

void displayBoth(int others[]) {
    int numbers[] = {-1, -2, -3, -4};

    for (int i = 0; i < 4; i ++) {
        cout << numbers[i] << endl;
    }

    for (int i = 0; i < 4; i ++) {
        cout << others[i] << endl;
    }
}

int main() {
    displayBoth(numbers());
}


