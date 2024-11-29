#include <iostream>
using namespace std;

int main() {
    double numbers[7];
    int size = 7;
    
    int i;

    int min = numbers[0];
    int max = numbers[0];

    for(i = 0; i < size; i++)
        cin >> numbers[i];

    for (i = 0; i < size; i++)
        if (numbers[i] < min)
            min = numbers[i];
}