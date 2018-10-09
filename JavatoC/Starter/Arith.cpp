/*
 * Java: I got a divide by 0 error when I ran the code. It compiled fine.
 * C++: When I ran the code I got "Floating point exception: 8". It compiled fine.  
 * C++ Explanation: After I googled some stuff, I read on stackoverflow that a floating point exception can be a sign of a divide by 0 error, which would make sense
 * because that is the error I got with the java code. This error is happening in both the java and c++ codes probably because dividing y/z is rounding down to 0, and then dividing x by that 
 * is causing a divide by 0 error.  
 */
# include <iostream>
using namespace std;
int divide(int x, int y, int z) {
    return x / (y / z);
}



int main()
{
    int n = divide(3, 2, 1);
    int m = divide(1, 2, 3); 
    int w = n * m;
    cout << w << endl;
    return 0;
}
