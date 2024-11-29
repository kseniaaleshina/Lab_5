#include <iostream>
using namespace std;

double min(double* numbers, int size);
double max(double* numbers, int size);

int main() {
    double numbers[7];
    int size = 7;
    
    int i;

    double product;

    for(i = 0; i < size; i++)
        cin >> numbers[i];

    product = min(numbers, size) * max(numbers, size);
    cout << product << endl;
}

double min(double* numbers, int size)
{
    int i;
    double min;

    min = numbers[0];
    
    for(i = 0; i < size; i++)
        if(min > numbers[i])
            min = numbers[i];
    
    return min;
}

double max(double* numbers, int size)
{
    int i;
    double max;

    max = numbers[0];
    
    for(i = 0; i < size; i++)
        if(max < numbers[i])
            max = numbers[i];
    
    return max;
}