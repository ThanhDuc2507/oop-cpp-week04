#include <iostream>
using namespace std;

int main()
{
    int n;

    // Nhap n
    cout << "Nhap n: ";
    cin >> n;

    // Bien luu ket qua
    long long factorial = 1;

    // Tinh n!
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    // In ket qua
    cout << n << "! = " << factorial;

    return 0;
}
