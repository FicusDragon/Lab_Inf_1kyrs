#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A[5][5] = {
        {-3.8, 0, 5.3, 4.5, 0.5},
        {0.2, -1.3, 0, -8.5, 3.5},
        {-1.1, 1.8, 5.1, -8.2, 0.32},
        {0, -0.3, 0, -1.28, 0.52},
        {-0.3, 0.5, 1.8, -7.3, 5.5}
    };

    double X[15];
    int k = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            X[k++] = A[i][j];
        }
    }

    double min = X[0];
    for (int i = 1; i < 15; i++) {
        if (X[i] < min) {
            min = X[i];
        }
    }

    cout << "Минимальный элемент массива X: " << min << endl;

    return 0;
}
