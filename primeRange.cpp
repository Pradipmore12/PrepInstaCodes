#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    int j;
    bool prime;

    for (int i = a; i <= b; i++)
    {
        prime = true;
        if (i == 1)
            prime = false;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
            cout << i << " ";
    }
    return 0;
}