#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateY(double x, double a) {
    return exp(-a * x) * (cos(a * x) + sqrt(x + a) / 3);
}

int main() {
    
    double x_start = 1.0, x_end = 5.0, x_step = 0.5;
    double a_start = 1.5, a_end = 3.5, a_step = 1.0;

    int width = 10;
    
    for (double a = a_start; a <= a_end; a += a_step) {
        
        cout << "Параметр = " << a << endl;
      
        cout << "Таблица 1\n";
        cout << setw(width) << "X=" << setw(width) << "Y=" << endl;
        for (double x = x_start; x <= x_end; x += x_step) {
            double y = calculateY(x, a);
            cout << setw(width) << x << setw(width) << y << endl;
        }
 
        cout << endl;

    }

    return 0;
}
