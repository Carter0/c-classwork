#include <iostream>
using namespace std;

//ask the user to input a set of numbers to sum (unknown number of input)
int main (){
    int sum = 0, value = 0;
    while (cin >> value){
        sum += value;
    }
    cout << "sum is " << sum << endl;
    return 0;
}
