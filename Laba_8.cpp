#include <iostream>
#include <string>

using namespace std;

int main() {
    string sent;
    cout << "Введите предложение: ";
    getline(cin, sent);

    size_t a_index = sent.find('a');
    if (a_index != string::npos) {
        size_t k_index = sent.find('k', a_index);
        if (k_index != string::npos) {
            cout << "Скопированная подстрока: " << sent.substr(a_index, k_index - a_index) << endl;
        } else {
            cout << "Скопированная подстрока: " << sent.substr(a_index) << endl;
        }
    } else {
        cout << "Буква 'а' не найдена в предложении." << endl;
    }

    return 0;
}