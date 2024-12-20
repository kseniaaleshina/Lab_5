#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int matrix[4][5];
    int rows = 4;
    int columns = 5;
    double array[4];

    int i;
    int j;

    srand(time(nullptr));

    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            matrix[i][j] = rand() % 198 - 99;
    
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
            cout << matrix[i][j] << ' ';
    }

    cout << "-----------------" << endl;
    
    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            if(matrix[i][j] > 0)
                matrix[i][j] = log(matrix[i][j]);
    
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
            cout << matrix[i][j] << ' ';
    }
    
    cout << "-----------------" << endl;

    for(i = 0; i < rows; i++) { 
        array[i] = 1.0;
        for(j = 0; j < columns; j++) { 
            if(matrix[i][j] < 0)  { 
                array[i] *= matrix[i][j];
            }
        }
    }
    
    for(i = 0; i < rows; i++)
        cout << array[i] << ' ';
    cout << endl;
}