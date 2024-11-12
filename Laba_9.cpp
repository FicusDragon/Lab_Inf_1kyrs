#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Worker {
    int No;
    string surname;
    string s;
    int yearBirth;
    int yearEmployment;
};

int Staz(const Worker& worker) {
    return 2023 - worker.yearEmployment;
}

bool cW(const Worker& a, const Worker& b) {
    return Staz(a) < Staz(b);
}

int main() {
    vector<Worker> workers = {
        {1, "Анисимов Ю. П.", "М", 1940, 1957},
        {2, "Иванов И. Н.", "М", 1980, 1999},
        {3, "Махова О. И.", "Ж", 1960, 1980},
        {4, "Огарев К. М.", "М", 1971, 1990},
        {5, "Егорова П. К.", "Ж", 1993, 2011},
        {6, "Голикова О. И.", "Ж", 1972, 1990},
        {7, "Сотников Т. С.", "М", 1943, 1960},
        {8, "Комов В. И.", "М", 1979, 2005},
        {9, "Лебедев А. А.", "М", 1959, 1981},
        {10, "Димова В. В.", "Ж", 1991, 2010}
    };


    sort(workers.begin(), workers.end(), cW);

    cout << "\nОтсортированная таблица:" << endl;
    cout << "\n_____________________________" << endl;
    for (const auto& worker : workers) {
    cout << "|" <<right<< setw(4) << worker.No << "|"
         << setw(39)<<left  << worker.surname<<  "|"
         << right <<setw(6) << worker.s << "|"
         << right <<setw(7) << worker.yearBirth << "|"
         << right <<setw(7) << worker.yearEmployment << "|" << endl;
      
} 
    cout << "\n_____________________________" << endl;   
    return 0;
}