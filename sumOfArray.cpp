#include<bits/stdc++.h>
using namespace std;
int getSum(int numbers[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+= numbers[i];
    }
    return sum;
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
    cout << "sum of array :" << getSum(numbers, size) <<endl;
    return 0;
}