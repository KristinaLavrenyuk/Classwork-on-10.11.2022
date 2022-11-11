
#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        c = 0;
        cin >> a >> b;
        if (a % b != 0)
        {
            c = a / b;
            d = b * (c + 1);
            c = d - a;
        }
        cout << c << endl;
    }
    system("pause");
}
