#include <bits/stdc++.h>
using namespace std;
int getMin(int numbers[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cin >> size;
    int numbers[100];
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    cout << "minimum in array is :  " << getMin(numbers, size) << endl;

    return 0;
}