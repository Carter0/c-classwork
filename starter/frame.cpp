#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    fstream myfile;
    myfile.open("input3.txt");
    string line;
    vector <string> output;
    unsigned int stringLength = 0;//unsigned because the length function returns an unsigned int
    if (myfile.is_open()){
        output.push_back("");
        while (getline (myfile, line)) {
            output.push_back("* " + line); 
            if (stringLength < line.length()) {
                stringLength = line.length();
            }
        }
    }
    myfile.close();
    stringLength += 4; // adding 4 because line does not contain the **
    //cout << output << endl;
    //cout << stringLength << endl;
    output.push_back("");
    for (unsigned int i = 0; i < stringLength; i++) {
        output.front().append("*");
        output.back().append("*");
    }

    for (unsigned int i = 0; i < output.size(); i++) {
        if (i != 0 && i != output.size() - 1) {
            output.at(i).append("            ");
            output.at(i).insert(stringLength - 2, " *");
        }
        cout << output.at(i) << endl;
    }
    return 0;
}
