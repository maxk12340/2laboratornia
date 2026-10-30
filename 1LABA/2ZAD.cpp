#include <iostream>
#include <windows.h>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

int start = 0, sum = 0, end;

cout << "Введите границу диапазона: ";
if(!(cin >> end)){
    cout << "Вы ввели букву.";
    return 0;
}

if (end < start || end == start){
    cout << "Ошибка в границе диапазона" << endl;
    return 0;
}

while (start < end) {
    start ++;
    if (start % 5 == 0){
        sum += start;
    }
}
cout << "Результат суммы: " << sum << endl;
    return 0;
}