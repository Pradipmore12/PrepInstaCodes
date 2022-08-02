#include <bits/stdc++.h>
using namespace std;
int main()
{

    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // main code begins here
    int start = 0;
    int end = 1;
    while (start <= size - 1 && end <= size - 1)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start += 2;
        end += 2;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}