#include <iostream>
#include <windows.h>
#include <string>
#include <algorithm>
using namespace std;

int main(){

system("chcp 1251 > nul");

int numbers = 0, SpecialChar = 0, spaces, letters;
string puncts = ".,;:?!-\"()'", txt;

cout << "Введите текст: ";
getline(cin, txt);

for (char digit = '0'; digit <= '9'; digit++){
    numbers += count(txt.begin(),txt.end(),digit);
}
cout << "Цифр: " << numbers << endl;

spaces = count(txt.begin(),txt.end(),' ');
cout << "Пробелов: " << spaces << endl;

for (int i = 0; i < puncts.length(); i++){
    SpecialChar += count(txt.begin(),txt.end(),puncts[i]);
}
cout << "Знаков препинания: " << SpecialChar << endl;

letters = (txt.length()) - (spaces + numbers + SpecialChar);
cout << "Букв: " << letters << endl;

    return 0;
}