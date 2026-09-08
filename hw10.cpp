#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Nhap n: ";
    cin >> n;

    int count = 0;

    cout << "Divisors: ";

    
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";

            count++;
        }
    }

    cout << endl;

    cout << "Number of divisors: " << count;

    return 0;
}