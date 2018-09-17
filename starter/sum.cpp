#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;	

int main() {
 	
	ifstream infile ("input2.txt");
    string str;
    getline (infile, str);
	stringstream sstr(str);
	int x;
	int sum;	
	while (sstr >> x) {
		sum += x;	
	}

	cout << "The sum is: " << sum << endl;


}
