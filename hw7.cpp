#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Nhap a va b: ";
    cin >> a >> b;

    while (b != 0)
    {
        int r = a % b;

        a = b;
        b = r;
    }

    cout << "UCLN = " << a;

    return 0;
}