#include <iostream>
using namespace std;

int main()
{
    int x, n;

    cout << "Nhap x: ";
    cin >> x;

    cout << "Nhap n: ";
    cin >> n;

    long long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    cout << x << "^" << n << " = " << result;

    return 0;
}