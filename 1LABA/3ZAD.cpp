#include <iostream>
#include <windows.h>
#include <string>
#include <cctype>
#include <clocale>
using namespace std;

int main(){

system("chcp 1251 > nul");
setlocale(LC_ALL, "Russian");

string txt, cross = "";
int start, end, count = 0;

cout << "Введите текст: ";
getline(cin, txt);

for (unsigned char c : txt){if (isalpha(c) != 0){count++;}}

cout << "Введите начало среза: ";
if (!(cin >> start)|| start <= 0 || start > count){
    cout << "Ошибка";
    return 1;
}

cout << "Первая буква: " << txt[start - 1] << endl;

cout << "Введите конец среза: ";
if (!(cin >> end)|| end <= 0 || end > count){
    cout << "Ошибка";
    return 1;
}
if (start > end){cout << "Ошибка"; return 1;}

while (start <= end){
    cross +=  txt[start - 1];
    start ++;
}
cout << "Итоговый срез: " << cross << endl;
    return 0;
}