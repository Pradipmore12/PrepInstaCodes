#include<bits/stdc++.h>
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
    
    // main reverse code starts here

    int start = 0;
    int end = size-1;
    while (start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    return 0;
}