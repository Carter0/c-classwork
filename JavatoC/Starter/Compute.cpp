/*
 * Java: There was a stack overflow error.
 * C++: It seg faulted when it tried to return 0.0.  
 * C++ Explanation: I believe this is another similar kind of error to Stack Overflow in Java. Here it just cannot process all of the data on the stack.  
 */
#include <iostream>
using namespace std;

double compute(int x) {
    if (x <= 0) {
        return 0.0;
    }

    double localdata1;
    double localdata2;
    double localdata3;
    double localdata4;
    double localdata5;

    localdata1 = compute(x - 1);
    localdata2 = compute(x - 2);
    localdata3 = compute(x - 3);
    localdata4 = compute(x - 4);
    localdata5 = compute(x - 5);

    return localdata1 - localdata2 + localdata3 - localdata4 + localdata5;
}


int main()
{
    cout << compute(1000000) << endl;

    return 0;
}
