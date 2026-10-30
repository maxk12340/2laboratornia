#include <iostream>
#include <windows.h>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

int start = 0;
int end;
int sum = 0;

cout << "Введите границу диапазона: ";
cin >> end;

while (start < end) {
    start ++;
    if (start % 5 == 0){
        sum += start;
    }
}
cout << "Результат суммы: " << sum << endl;
    return 0;
}