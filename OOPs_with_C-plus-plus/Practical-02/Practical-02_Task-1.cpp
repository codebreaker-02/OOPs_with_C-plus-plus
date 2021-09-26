#include <iostream>
using namespace std;

int main()
{
    int n, count = 1;
    cout << "Enter a number : ";
    cin >> n;
    if (n == 1)
        count = 0;
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                count = 0;
        }
    }
    if (count)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}