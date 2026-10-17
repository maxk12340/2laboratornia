#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main(){

system("chcp 1251 > nul");

string txt, cross = "";
int start, end;

cout << "¬ведите текст: ";
getline(cin, txt);

cout << "¬ведите начало среза: ";
if (!(cin >> start)){
    cout << "ќшибка";
    return 0;
}

cout << "ѕерва€ буква: " << txt[start - 1] << endl;

cout << "¬ведите конец среза: ";
if (!(cin >> end)){
    cout << "ќшибка";
    return 0;
}

while (start <= end){
    cross +=  txt[start - 1];
    start ++;
}
cout << "»тоговый срез: " << cross << endl;
    return 0;
}