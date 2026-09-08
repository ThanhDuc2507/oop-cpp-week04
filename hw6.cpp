#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Nhap n: ";
    cin >> n;

    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;

        sum = sum + digit;

        n = n / 10;
    }

    cout << "Tong cac chu so = " << sum;

    return 0;
}