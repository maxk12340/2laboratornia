#include <iostream>
#include <windows.h>
#include <bitset>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

int NumInTen, st;

cout << "Введите число, которое нужно перевести: ";
if (!(cin >> NumInTen)){
    cout << "Выбрано не число";
    return 0;
}

cout << "Выберите систему счисления: 2, 8, 16: ";
cin >> st;
if (st == 16){
    cout << "Итоговое число: " << hex << NumInTen << endl;
}
if (st == 8){
    cout << "Итоговое число: " << oct << NumInTen << endl;
}
if (st == 2){
    string s = "";
    while (NumInTen > 0){
        s = s + to_string(NumInTen % 2);
        NumInTen /= 2;
    }
    cout << "Итоговое число: " << s << endl;
}
else {
    cout << "Неверная система счисления";
}
    return 0;
}