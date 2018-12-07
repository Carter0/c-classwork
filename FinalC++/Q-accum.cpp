//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <list>
//#include <string>
//using namespace std;
//
//// TODO: ? conditional_accum(? begin, ? end, ? init, ? pred)
//
//
//
//
//
///* OUTPUT
//9
//5
//3
//3.3
//ccdd
//*/
//int main() {
//    {
//        int c[] = { 1, 2, 3, 4, 5 };
//        int result = conditional_accum(c, c + 5, 0, [](int x){ return x % 2 == 1; });
//        cout << result << endl;
//    }
//    {
//        vector<int> c;
//        int result = conditional_accum(c.begin(), c.end(), 5, [](int x){ return true; });
//        cout << result << endl;
//    }
//    {
//        vector<int> c = { 2 };
//        int result = conditional_accum(c.begin(), c.end(), 3, [](int x){ return false; });
//        cout << result << endl;
//    }
//    {
//        list<double> c = { 1.1, 2.2, 5.5 };
//        double result = conditional_accum(c.begin(), c.end(), 0.0, [](double x){ return x < 3; });
//        cout << setprecision(2) << result << endl;
//    }
//    {
//        vector<string> c = { "a", "b", "cc", "dd" };
//        string result = conditional_accum(c.cbegin(), c.cend(), string(), [](const string & x){ return x.size() > 1; });
//        cout << result << endl;
//    }
//}
