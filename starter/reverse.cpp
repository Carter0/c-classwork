#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


string reverseCharacters(string word);
vector <string> reverseLines(vector <string> start);

int main() {
    ifstream infile ("input.txt");
    string str;
    vector <string> start;
    while(getline (infile, str)) {
        start.push_back(str); 
    }


    vector <string> reverse = reverseLines(start);
    for (string line: reverse) {
        cout << line << endl;
    }
}


//take the end of first vector and add it to the end of the second vector
vector <string> reverseLines(vector <string> start) {
    vector <string> theReverse;
    while (!start.empty()) {		
        string word = reverseCharacters(start.back());
        theReverse.push_back(word);
        start.pop_back();	
    }
    return theReverse;
}

string reverseCharacters (string word) {
    string reverse;
    while (!word.empty()) {
        reverse.push_back(word.back());
        word.pop_back();
    }
    return reverse;

}




