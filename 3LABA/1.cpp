#include <iostream>
#include <windows.h>
using namespace std;

int maxOfThree(int a,int b, int c){

    int maxValue = a;

    if   (maxValue < b){maxValue = b;}
    if   (maxValue < c){maxValue = c;}
    return maxValue;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);

    int a, b, c;

    cout << "Введите число a: "; if (!(cin >> a)){cout << "Введено неверное значени!"; return 1;}
    cout << "Введите число b: "; if (!(cin >> b)){cout << "Введено неверное значени!"; return 1;}
    cout << "Введите число c: "; if (!(cin >> c)){cout << "Введено неверное значени!"; return 1;}
    
    cout << "Наибольшее число: " << maxOfThree(a,b,c) << endl;
    
}