#include <iostream>
#include <string>
using namespace std;

string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void sayDigits(int num)
{

    if (num == 0)
    {
        return;
    }

    sayDigits(num / 10);

    int rem = num % 10;
    cout << arr[rem] << " ";
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0)
    {
        cout << arr[0] << " ";
    }
    else
    {
        sayDigits(num);
    }

    return 0;
}
