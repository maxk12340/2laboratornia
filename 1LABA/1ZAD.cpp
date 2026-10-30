#include <iostream>
#include <windows.h>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

int number, degree, degreest;
float modul = 1, result;

cout <<"Введите число: ";
if (!(cin >> number)){
    cout << "Ошибка, вы ввели не число";
    return 0;
}


cout <<"Введите степень: ";
if (!(cin >> degree)){
    cout << "Ошибка, вы ввели не число";
    return 0;
} 

if (degree < 0){
    degreest = degree * (-1);
}

if (degree >= 0){
    degreest = degree;
}

for (int i = 1; i <= degreest; i++){
    modul = modul * number;  
}

if (degree < 0){
    result = 1 / modul;
}

if (degree > 0){
    result = modul;
}

if (degree == 0){
    result = 1;
}

cout << "Число " << number << " в степени " << degree << " будет " << result << endl;
    return 0;
}