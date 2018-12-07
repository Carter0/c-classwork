//#include <iostream>
//#include <string>
//using namespace std;
//
//class CharArray {
//public:
//    CharArray(const string & str) {
//        // TODO
//    }
//
//    ~CharArray() {
//        // TODO
//    }
//    
//    CharArray(CharArray && o) {
//        // TODO
//    }
//
//    CharArray & operator=(CharArray && o) {
//        // TODO
//    }
//
//    void print() const {
//        cout << "chararray: ";
//        for (const char * p = m_arr; p && *p; ++ p) {
//            cout << *p;
//        }
//        cout << endl;
//    }
//private:
//    CharArray(const CharArray & o) = delete;
//    CharArray & operator=(const CharArray & o) = delete;
//    char * m_arr;
//};
//
//
//
//
///* OUTPUT
//chararray: hello1
//chararray:
//chararray: hello2
//chararray:
//chararray: hello3
//chararray: hello4
//chararray:
//chararray: hello5
//*/
//int main() {
//    {
//        const CharArray ca(string("hello1"));
//        ca.print();
//    }
//    {
//        CharArray ca(string("hello2"));
//        CharArray cb(move(ca));
//        ca.print();
//        cb.print();
//    }
//    {
//        CharArray ca(string("hello3"));
//        CharArray cb(string("world3"));
//        cb = move(ca);
//        ca.print();
//        cb.print();
//    }
//    {
//        CharArray ca(string("hello4"));
//        CharArray cb(move(ca));
//        ca = move(cb);
//        ca.print();
//        cb.print();
//    }
//    {
//        CharArray ca(string("hello5"));
//        ca = move(ca);
//        ca.print();
//    }
//}
//
