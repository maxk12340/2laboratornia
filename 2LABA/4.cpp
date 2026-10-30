#include <iostream>
#include <windows.h>
using namespace std;

int main(){

    SetConsoleOutputCP(CP_UTF8);

    int N, K;

    cout << "Введите число N: "; if (!(cin >> N) || N <= 0){cout << "Введено неверное значение!"; return 1;}

    cout << "Введите число K: "; if (!(cin >> K)){cout << "Введено неверное значение!"; return 1;}

    int arr[N] = {};

    for (int i = 0; i < N; i++){
        cout << "Введите числа в массив: "; if (!(cin >> arr[i])){cout << "Введено не число"; return 1;}
    }

    //bool isTrue = false;

    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++){
            if ((arr[i] + arr[j] == K)){cout << "Пара: " << i << " и " << j << endl; return 0;}
        }
    }
    cout << "Пара не найдена!" << endl;
    return 0;
}