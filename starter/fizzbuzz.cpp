#include <iostream>
using namespace std;

int main()
{
  	int x;
	cout << "Enter a value for x" << endl;
	cin >> x;
	

	int y;
	cout << "Enter a value for y" << endl; 
	cin >>  y;



	for (int i = 1; i <= 20; ++i) {
			if (x % i == 0  && y % i  == 0) {
				cout << "FizzBuzz" << endl;
			}
			else if(x % i == 0) {
				cout << "Fizz" << endl;
			} else if (y % i  == 0) {
				cout << "Buzz" << endl;
			} else {
				cout << i << endl;
			}
		}
	

  return 0;
}
