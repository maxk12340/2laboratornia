#include <iostream>
#include <windows.h>
using namespace std;

double calculate(double a, double b, char op){
  if (op == '+'){return a + b;}
  else if (op == '-'){return a - b;}
  else if (op == '*'){return a * b;}
  else if (op == '/'){if (b == 0.0){return a + 1;} return a / b;}
  else {return a + 2 ;}
}
int main(){

    SetConsoleOutputCP(CP_UTF8);
    
    double a, b;
    char op;

    cout << "Введите первое число: "; if(!(cin >> a)){cout << "Введено не число!"; return 1;}
    cout << "Введите второе число: "; if(!(cin >> b)){cout << "Введено не число!"; return 1;}
    cout << "Введите операндум (+, -, *, /): "; cin >> op;

    double result =  calculate(a, b, op);

    if (result == a + 1){cout << "Ошибка, деление на ноль!" << endl;}
    else if (result == a + 2){cout << "Ошибка, неверный операндум!" << endl;}  
    else {cout << "Результат вычислений: " << result << endl;} 
    return 0;
}