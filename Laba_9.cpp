#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Worker {
    int No;
    string surname;
    string name;
    string gender;
    int yearBirth;
    int yearEmployment;
};

int Staz(const Worker& worker) {
    return 2023 - worker.yearEmployment;
}

bool compareWorkers(const Worker& a, const Worker& b) {
    return Staz(a) < Staz(b);
}

int main() {
    vector<Worker> workers = {
        {1, "Анисимов", "Ю. П.", "М", 1940, 1957},
        {2, "Иванов", "И. Н.", "М", 1980, 1999},
        {3, "Махова", "О. И.", "Ж", 1960, 1980},
        {4, "Огарев", "К. М.", "М", 1971, 1990},
        {5, "Егорова", "П. К.", "Ж", 1993, 2011},
        {6, "Голикова", "О. И.", "Ж", 1972, 1990},
        {7, "Сотников", "Т. С.", "М", 1943, 1960},
        {8, "Комов", "В. И.", "М", 1979, 2005},
        {9, "Лебедев", "А. А.", "М", 1959, 1981},
        {10, "Димова", "В. В.", "Ж", 1991, 2010}
    };

    cout << "Исходная таблица:" << endl;
    for (const auto& worker : workers) {
        cout << worker.No << " " << worker.surname << " " << worker.name << " " << worker.gender << " " << worker.yearBirth << " " << worker.yearEmployment << endl;
    }

    sort(workers.begin(), workers.end(), compareWorkers);

    cout << "\nОтсортированная таблица:" << endl;
    for (const auto& worker : workers) {
        cout << worker.No << " " << worker.surname << " " << worker.name << " " << worker.gender << " " << worker.yearBirth << " " << worker.yearEmployment << endl;
    }

    return 0;
}
