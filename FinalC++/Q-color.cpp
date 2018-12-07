//#include <iostream>
//#include <iomanip>
//#include <stdexcept>
//using namespace std;
//
//class Color {
//public:
//    Color();
//    Color(const Color & o);
//    Color(float ir, float ig, float ib);
//    float operator[](int idx) const;
//
//    float getRed() const { return m_r; }
//    float getGreen() const { return m_g; }
//    float getBlue() const { return m_b; }
//private:
//    Color & operator=(const Color &) = delete;
//    static inline float clamp(float x) {
//        return (x < 0) ? 0 : ((x > 1) ? 1 : x);
//    }
//    const float m_r, m_g, m_b;
//};
//
//ostream & operator<<(ostream & os, const Color & c) {
//    return os << setprecision(2) << c.getRed() << "," << c.getGreen() << "," << c.getBlue();
//}
//
//// TODO: implement color member functions and related operators
//
//
//
//
//
///* OUTPUT
// 0,0.5,1
// 0.8,1,1
// 0.8,1,1
// 0.2,0.4,0.6
// 0.1,0.3,0.5
// exception
// exception
// */
//int main() {
//    {
//        Color cc(-1, 0.5, 2);
//        cout << cc << endl;
//    }
//    {
//        Color cc = 2.0 * Color(0.4, 0.5, 0.6);
//        cout << cc << endl;
//    }
//    {
//        Color cc = Color(0.4, 0.5, 0.6) * 2.0;
//        cout << cc << endl;
//    }
//    {
//        Color cc(0.2, 0.4, 0.6);
//        cout << setprecision(2) << cc[0] << "," << cc[1] << "," << cc[2] << endl;
//    }
//    {
//        const Color cc(0.1, 0.3, 0.5);
//        cout << setprecision(2) << cc[0] << "," << cc[1] << "," << cc[2] << endl;
//    }
//    {
//        const Color cc(0.1, 0.3, 0.5);
//        try {
//            cout << setprecision(2) << cc[-1] << endl;
//        } catch (const out_of_range & e) {
//            cout << "exception" << endl;
//        }
//    }
//    {
//        const Color cc(0.1, 0.3, 0.5);
//        try {
//            cout << setprecision(2) << cc[3] << endl;
//        } catch (const out_of_range & e) {
//            cout << "exception" << endl;
//        }
//    }
//}
