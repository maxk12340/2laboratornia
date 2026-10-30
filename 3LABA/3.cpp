#include <iostream>
#include <windows.h>
using namespace std;

int fibonacci(int n){
    if (n == 0){return 0;}

    unsigned long long next, a = 0, b = 1;

    for (int i = 2; i < n; ++i){
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}
int main(){
    
    SetConsoleOutputCP(CP_UTF8);

    int n;

    cout << "Введите n: "; if(!(cin >> n)){cout << "Введено не число!"; return 1;}

    if (n >= 95){cout << "Слишком большое число!"; return 1;}

    cout << "Число фибоначчи: " << fibonacci(n) << endl;

    return 0;
}