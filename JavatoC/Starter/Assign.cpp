/*
 * Java: Compiling the code produces an error. I got "incompatible types: possible lossy conversion from int to short".
 * C++: The code compiled and ran just fine in c++. Though the value for n and o will be undefined.  
 * C++ Explanation: The int value n is beyond the range of the short, so converting from an int to a short in the case will cause errors. In java, the code will crash. 
 * In c++, it will still compile and run, but the output for m and o will be undefined behavior.   
 */
#include <iostream>
using namespace std;

int main()
{
    int n = 40000;
    short m = n;
    int o = m;
    cout << "n is " << n << endl;
    cout << "m is " << m << endl;
    cout << "o is " << o << endl;
    return 0;
}
