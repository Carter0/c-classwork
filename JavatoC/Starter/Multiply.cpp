/*
 * Java: Error the program tried to access memory in the array that did not exist. Out of bounds error. 
 * C++: I get undefined values for total and = 6. 
 * C++ Explanation: Unlike java, c++ will just create undefined behaviour when the array tries to access memory it cant find.  
 */
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3};
    int total = 1;

    for(int i = 0; i <= 3; i++) {
        total *= a[i];
    }
    cout << total << " = 6" << endl;
    return 0;
}
