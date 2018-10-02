/*
 * Java: The program printed out all the odd numbers from 1 to 7.
 * C++: It returns 1, and then 3 very large positive or negative numbers. 
 * C++ Explanation: It can find the first element of the array, but it cannot access the later memory elements in the array.   
 */
#include <iostream>
using namespace std;
int* oddNumbers() {
    int numbers[] = {1, 3, 5, 7};
    return numbers;
}


int main() {
    int* odd;  
    odd = oddNumbers();
    
    
    for (int i = 0; i < 4; i ++) {
        cout << *(odd + i) << endl;
    }
    return 0;
}
