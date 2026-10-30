#include <iostream>
#include <windows.h>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

int number;
int degree;
int result = 1;

cout <<"Введите число: ";
cin >> number;

cout <<"Введите степень: ";
cin >> degree;

for (int i = 1; i <= degree; i++){
    result = result * number;  
}

cout << "Число " << number << " в степени " << degree << " будет " << result << endl;
    return 0;
}