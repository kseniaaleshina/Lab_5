#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int a[2][3];
    int b[3][4];
    int product[2][4];

    int a_rows = 2;
    int a_columns = 3;
    int b_rows = 3;
    int b_columns = 4;

    int i;
    int j;

    srand(time(nullptr));

    for(i = 0; i < a_rows; i++)
        for(j = 0; j < a_columns; j++)
            a[i][j] = rand() % 10; 
    
    for(i = 0; i < b_rows; i++)
        for(j = 0; j < b_columns; j++)
            b[i][j] = rand() % 10;
    
    for (i = 0; i < a_rows; i++)
    {
        for (j = 0; j < a_columns; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    
    cout << "-----------------" << endl;

    for (i = 0; i < b_rows; i++)
    {
        for (j = 0; j < b_columns; j++)
            cout << b[i][j] << ' ';
        cout << endl;
    }

    for (i = 0; i < a_rows; i++)
    {
        for (j = 0; j < b_columns; j++)
        {
            product[i][j] = 0;
        }
    }

}