#include <iostream>
#include <windows.h>
using namespace std;

int main(){

    SetConsoleOutputCP(CP_UTF8);

    int size;

    cout << "Введите размер массива: "; if (!(cin >> size) || size <= 0){cout << "Ошибка, задан не размер!"; return 1;}

    int arr[size] = {};

    for (int i = 0; i < size; i++){
    cout << "Введите число в массив: "; if (!(cin >> arr[i])){cout << "Ошибка, введено не число!"; return 1;}
    }
    
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j+1]){int temp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = temp;} 
        }
    }

    cout << "Отсортированный массив: "; for (int i = 0; i < size; i++){cout << arr[i] << " ";}
    
    return 0; 
}