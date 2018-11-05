#include <iostream>
using namespace std;


int main() {
    char toReverse[] = "peanut"; 
    char* beg = toReverse;
    char* end = toReverse + strlen(toReverse) - 1; 

    while (beg < end) {
        char temp = *beg;
        *beg = *end;
        *end = temp;

        beg++;
        end--;
    }


    cout << toReverse << endl;
    return 0;
}
