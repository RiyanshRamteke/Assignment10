#include <iostream>
using namespace std;

// ---------- FUNCTION TEMPLATE 1 : find the bigger value ----------
// T is a "type name". It becomes int, float, char... when we call the function
template <class T>
T maxOf(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

// ---------- FUNCTION TEMPLATE 2 : swap two values ----------
template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// ---------- CLASS TEMPLATE : Calculator ----------
// One class that works for int, float, double...
template <class T>
class Calculator {
private:
    T a, b;
public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T add() {
        return a + b;
    }

    T multiply() {
        return a * b;
    }
};

int main() {
    int x, y;
    float p, q;

    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Enter two decimal numbers: ";
    cin >> p >> q;

    cout << endl << "--- 1. Function Template : maxOf ---" << endl;
    cout << "Bigger int   = " << maxOf(x, y) << endl;        // T becomes int
    cout << "Bigger float = " << maxOf(p, q) << endl;        // T becomes float
    cout << "Bigger char  = " << maxOf('a', 'z') << endl;    // T becomes char

    cout << endl << "--- 2. Function Template : swapValues ---" << endl;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap : x = " << x << ", y = " << y << endl;

    cout << endl << "--- 3. Class Template : Calculator ---" << endl;
    Calculator<int> c1(x, y);                                // T becomes int
    cout << "Int Calculator   -> Sum = " << c1.add()
         << ", Product = " << c1.multiply() << endl;

    Calculator<float> c2(p, q);                              // T becomes float
    cout << "Float Calculator -> Sum = " << c2.add()
         << ", Product = " << c2.multiply() << endl;

    return 0;
}