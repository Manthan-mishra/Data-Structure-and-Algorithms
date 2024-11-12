#include <iostream>
using namespace std;

void printRev(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printRev(n - 1);
        cout << n << " ";
    }
}

int main()
{
    int num;
    cout << "Please provide a number" << endl;
    cin >> num;
    printRev(num);
    return 0;
}