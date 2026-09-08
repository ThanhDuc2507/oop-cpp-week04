#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Nhap a va b: ";
    cin >> a >> b;

   
    int x = a;
    int y = b;
   
    while (y != 0)
    {
        int r = x % y;

        x = y;
        y = r;
    }

    int ucln = x;

  
    int bcnn = (a * b) / ucln;

    cout << "BCNN = " << bcnn;

    return 0;
}