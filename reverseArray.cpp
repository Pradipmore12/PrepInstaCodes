#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size)
{
    for (int i = size-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return;
}
int main()
{
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, size);
    return 0;
}