#include <iostream>
#include <windows.h>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

float weight, height, UMT;

cout << "Введите ваш вес: ";

if (!(cin >> weight)){
    cout << "Ошибка, вы ввели не число";
    return 0;
}

cout << "Введите ваш рост: ";

if (!(cin >> height)){
    cout << "Ошибка, вы ввели не число";
    return 0;
}

if (height <= 0 || weight <= 0){
    cout << "Ошибка" << endl;
    return 0;
}

UMT = weight / (height * height);
UMT = (int(UMT * 10 + 0.5))/10.0;

cout << "Ваш индекс массы: " << UMT << endl;

    return 0;
}