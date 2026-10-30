#include <iostream>
#include <windows.h>
#include <string>
#include <algorithm>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

string txt;
int numbers = 0;
int SpecialChar;
int spaces;
int letters;

cout << "Введите строку: ";
getline(cin, txt);

for (char digit = '0'; digit <= '9'; digit++){
    numbers += count(txt.begin(),txt.end(),digit);
}
cout << "Количество цифр: " << numbers << endl;

spaces = count(txt.begin(),txt.end(),' ');
cout << "Количество пробелов:" << spaces << endl;

SpecialChar = count(txt.begin(),txt.end(),',');
cout << "Количество знаков препинания: " << SpecialChar << endl;

letters = (txt.length()) - (spaces + numbers + SpecialChar);
cout << "Количество букв: " << letters << endl;

    return 0;
}