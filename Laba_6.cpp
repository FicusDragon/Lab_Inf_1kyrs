#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0)); // инициализируем генератор случайных чисел
    float x[30], y[30], t;
    int i, j = 0;
    for(i = 0; i < 30; i++){
        x[i] = (rand() % (110)); // генерируем случайное число от 0 до 110
        y[i] = 0;
    }
    for(i = 0; i < 30; i++){
        if(x[i] > 0){
            y[i] = x[i];
            j++;
        }
    }
    for(i = 0; i < 30; i++){
        cout << y[i] << endl;
    }
    if(j != 0){
        t = 0;
        for(i = 0; i < 30; i++){
            t += y[i];
        }
        t /= j;
        cout << "______" << endl;
        cout << t << endl;
    } else {
        cout << "Нет положительных чисел" << endl;
    }
    return 0;
}