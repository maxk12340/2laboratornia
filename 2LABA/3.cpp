#include <iostream>
#include <windows.h>

using namespace std;

int main(){

    SetConsoleOutputCP(CP_UTF8);

    int matrix[10][10] = {
        {9, 8, 9, 7, 8, 9, 9, 9, 8, 7},
        {8, 7, 8, 6, 7, 8, 9, 8, 6, 5},
        {9, 8, 9, 5, 8, 9, 7, 9, 7, 6},
        {8, 9, 8, 6, 7, 8, 6, 8, 9, 8},
        {7, 6, 7, 8, 9, 5, 4, 5, 7, 8},
        {8, 5, 8, 9, 8, 6, 5, 6, 8, 9},
        {9, 7, 9, 8, 9, 7, 8, 9, 9, 8},
        {8, 8, 9, 9, 8, 9, 8, 7, 6, 7},
        {7, 9, 8, 7, 7, 8, 9, 8, 5, 6},
        {6, 8, 7, 6, 5, 6, 8, 9, 6, 2}
    };
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            
        if  (
             (j > 0  &&            matrix[i][j] >= matrix[i][j-1])    ||
             (i > 0  &&            matrix[i][j] >= matrix[i-1][j])    ||
             (j < 9  &&            matrix[i][j] >= matrix[i][j+1])    ||
             (i < 9  &&            matrix[i][j] >= matrix[i+1][j])    ||
             (j < 9  && i < 9   && matrix[i][j] >= matrix[i+1][j+1])  ||
             (j > 0  && i > 0   && matrix[i][j] >= matrix[i-1][j-1])  ||
             (j > 0  && i < 9   && matrix[i][j] >= matrix[i+1][j-1])  ||
             (j < 9  && i > 0   && matrix[i][j] >= matrix[i-1][j+1])  
            ){}
        else {cout << "Минимум " << matrix[i][j] << " координаты: [" << i+1 << "] [" << j+1 << "]" << endl;}
            
        
        }
    }

    return  0;
}
