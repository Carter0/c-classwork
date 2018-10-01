/*
 * Java: The program printed out all the odd numbers from 1 to 7.
 * C++: 
 * C++ Explanation: 
 */
#include <iostream>
using namespace std;
int* oddNumbers()
{
    int numbers[] = {1, 3, 5, 7};
    return numbers[0];
}





int main()
{
    int odd[5] = oddNumbers();

    for (int i = 0; i < 4; i ++) {
        cout << odd[i] << endl;
    }
    return 0;
}
