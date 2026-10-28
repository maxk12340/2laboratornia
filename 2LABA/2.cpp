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
    cout << endl;
   
    int left = 0, right = size - 1, num;
    bool isTrue = false;

    cout << "Введите число, которое нужно найти: "; if (!(cin >> num)){cout << "Ошибка, введено не число!"; return 1;}

    while (left <= right){

    int mid = (left + right)/2, arrNum = arr[mid];

    if (num == arrNum){cout << "Индекс числа в массиве: " << mid; isTrue = true; break;}

    else if (num < arrNum){right = mid - 1;}

    else if (num > arrNum){left = mid + 1;}

    }

    if (isTrue == false){cout << "Число не найдено!" << endl;}

    return 0;  
}