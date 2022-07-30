#include <bits/stdc++.h>
using namespace std;
bool amstrong(int n)
{
    int originalNum = n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    if (sum == originalNum)
    {
        return true;
    }

    else
        return false;
}
int main()
{

    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (amstrong(i))
            cout << i << " ";
    }
    return 0;
}