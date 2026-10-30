#include <iostream>
#include <windows.h>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

int day;
int month;
int year;

cout << "Введите дату рождения (день, месяц, год, через пробел): ";
cin >> day >> month >> year;

int age = 2026 - year;

if (month > 10 || (month == 10 && day > 3)){
    age -= 1;
}

cout << "На данный момент вам " << age << " лет" << endl;

    return 0;
}