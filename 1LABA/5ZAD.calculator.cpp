#include <iostream>
#include <windows.h>
#include <bitset>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

int NumInTen;
int st;

cout << "Введите число, которое нужно перевести: ";
cin >> NumInTen;

cout << "Выберите систему счисления: 2, 8, 16: ";
cin >> st;
if (st == 16){
    cout << "Итоговое число: " << hex << NumInTen << endl;
}
if (st == 8){
    cout << "Итоговое число: " << oct << NumInTen << endl;
}
if (st == 2){
    cout << "Итоговое число: " << bitset<8>(NumInTen) << endl;
}
else {
    cout << "Неверная система счисления";
}
    return 0;
}