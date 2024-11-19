#include <iostream>
using namespace std;

int apowerb(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * apowerb(a, b - 1);
}

int main()
{
    int a, b;
    cout << "enter base " << endl;
    cin >> a;
    cout << "enter exponent " << endl;
    cin >> b;
    int ans = apowerb(a, b);
    cout << "result is: " << ans;

    return 0;
}