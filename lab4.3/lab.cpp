#include <iostream> 
#include <iomanip> 
#include <cmath> 


using namespace std;

int main()
{
    double x, xp, xk, dx;  // вхідні аргументи 
    double a;  // вхідний параметр 
    double b;  // вхідний параметр 
    double c;  // вхідний параметр 
    double F;  // результат обчислення виразу
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(9) << "x" << "     |"
        << setw(7) << "F" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x == 0 && b != 0)
            F = a * pow(x + c, 2)-b;
        else if (x == 0 && b == 0)
            F = (x - a) / -c;
        else F = a + (x / c);
        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << F
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    cin.get();
    return 0;
}