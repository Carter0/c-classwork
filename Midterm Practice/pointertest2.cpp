#include <iostream>
using namespace std;


int main() {
    int *x, y[] = {2, 4, 6};
    x = y + 1;
    cout << *x << endl;

    return 0;
}
