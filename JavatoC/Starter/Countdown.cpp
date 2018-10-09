/*
 * Java: I got an error when I compiled the code. The error is "variable downto might not have been initialized". 
 * C++: The code compiled and ran just fine. The rocket blasted off.  
 * C++ Explanation: The explanation is that in java all variables have to be explicitly defined. In C++ they do not have to be. downTo was degined to be 0 by default. In java is was assigned to be null.
 * You can't count down to null.  
 */
#include <iostream>
using namespace std;

void countdown() {
    int downTo;
    for(int i = 10; i >= downTo; --i) {
        cout << i << endl;
    }
    cout << "Blastoff!!" << endl;

}



int main()
{
    countdown();
    return 0;
}
