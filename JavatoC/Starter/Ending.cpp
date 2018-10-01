/*
 * Java: The code compiled but I got an error. Error was " String index out of range: 13". Accessing part of a string that does not exist.
 * C++: It compiled and ran. It just added a blank space at the end.  
 * C++ Explanation: TODO, why does this work? 
 */
#include <iostream>
using namespace std;
int main()
{
    string in = "Hello, world!";
    int length = 16;
    string out = "";

    for (int i = length / 2; i < length; i ++) {
        out += in[i]; 
    }

    cout << out  <<  " "  << out.length() << endl;
    return 0;
}
