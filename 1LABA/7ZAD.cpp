#include <iostream>
#include <windows.h>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

int day, month, year, age;

cout << "Введите дату рождения (день, месяц, год, через пробел): ";
if (!(cin >> day >> month >> year) || (day > 31 || month > 12 || year < 0 || year > 2026 || month < 1 || day < 1)){
    cout << "Ошибка, введены неверные значения";
    return 0;
};

age = 2026 - year;

if (month > 10 || (month == 10 && day > 3)){
    age -= 1;
}

cout << "На данный момент вам " << age << " лет" << endl;

    return 0;
}