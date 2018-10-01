#include <iostream>
#include <vector>
using namespace std;



int main () {

    vector <int> ints;
    int toAdd;

    cout << "Enter some numbers followed by a string to stop" << endl;
    while (cin >> toAdd) {
        ints.push_back(toAdd);
    }

    for (int i = ints.size() - 1; i >= 0; i--) {
        cout << ints.at(i) << endl;
    }
}










