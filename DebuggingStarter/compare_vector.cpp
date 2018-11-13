#include <iostream>
#include <vector>
using namespace std;




void outPutAt(vector<int> integers) {
    for (int i = 0; i < integers.size(); i++) {
        integers.at(i);
    }
}

void outPutBr(vector<int> integers) {
    for (int i = 0; i < integers.size(); i++) {
        integers[i];
    }
}



int main() {
    vector <int> integers;
    for (int i = 0; i < 1000000; i++) {
integer:`.push_back(i);
    }
   
    outPutAt(integers);
    outPutBr(integers); 
}
