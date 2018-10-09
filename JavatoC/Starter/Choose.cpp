/*
 * Java: "Compiling the code produces an error. The error is "missing return statement".
 * C++: It compiled and when I ran it I got "Zero, two, Illegal instruction: 4" 
 * C++ Explanation: In java, it needs the object to return a value, since it cannot it will throw and error. In c++, it will compile, but it 
 * will also throw an error since it has no memory for the method with 4 as an input. 
 */
#include <iostream>
#include <string>
using namespace std;
string choose(int n) {
    switch(n) {
        case 0: 
            return "zero";
        case 1:
            return "one";
        case 2: 
            return "two";
    }

}




int main() {
    cout << choose(0) << endl;
    cout << choose(2) << endl;
    cout << choose(4) << endl;
    return 0;
}
