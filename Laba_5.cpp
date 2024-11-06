#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N, i;
    float x, min = std::numeric_limits<float>::max(), nmin = 0;
    cout << "сколько чисел будите вводить? ";
    cin >> N;
    cout << "введите " << N << " чисел";
    for (i = 1; i <= N; i++) {
        cin >> x;
        if (x < min) {
            min = x;
            nmin = i;
        }
    }
    cout << "минимальное число: " << min << " порядковый номер: " << nmin << endl;
    return 0;
}
