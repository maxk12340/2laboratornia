#include <iostream>
#include <windows.h>
#include <algorithm>
#include <random>
#include <vector>
using namespace std;

int main(){

    SetConsoleOutputCP(CP_UTF8);

    int N = 1000000; vector<int> arr(N); random_device rd; mt19937 gen(rd());

    generate(arr.begin(), arr.end(), [&](){return uniform_int_distribution<>(1,1000)(gen);});

    int K;
    cout << "Введите число K: "; if (!(cin >> K)){cout << "Введено неверное значение!"; return 1;}

    sort(arr.begin(), arr.end());
    int i = 0, j = N - 1, current_sum;
    
    while (i < j){
        current_sum = arr[i] + arr[j];
        if (current_sum == K ){cout << "Пара " << i << " и " << j << endl; return 0;}
        else if (current_sum < K){i++;}
        else if (current_sum > K){j--;}
    }
    cout << "Пара не найдена!" << endl;
    return 0;
}