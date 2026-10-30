#include <iostream>
#include <windows.h>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

string txt;
string cross = "";
int start;
int end;


cout << "Введите текст: ";
cin >> txt;

cout << "Введите цифру, с которой начнется срез текста: ";
cin >> start;

cout << "Буква: " << txt[start - 1] << endl;

cout << "Введите цифру, на которой окончится срез текста: ";
cin >> end;

while (start < end + 1){
    cross +=  txt[start - 1];
    start ++;
}
cout << "Итоговый срез: " << cross << endl;
    return 0;
}