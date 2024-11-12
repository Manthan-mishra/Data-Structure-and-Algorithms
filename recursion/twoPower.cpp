#include <iostream>
using namespace std;

int powerOfTwo(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return 2 * powerOfTwo(n - 1);
    }
}

int main()
{
    int n;
    cout << "what power of 2 u have to print " << endl;
    cin >> n;
    int result = powerOfTwo(n);
    cout << "reult is " << result;
    return 0;
}