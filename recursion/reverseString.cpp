#include <iostream>
#include <string>
using namespace std;

void rev(string &str, int i, int j)

{
    if (i > j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    rev(str, i, j);
}

int main()
{
    cout << "hello";
    string str = "abcdefghij";
    cout << "current String " << str << endl;
    int i = 0;
    int j = str.length() - 1;
    rev(str, i, j);
    cout << "Reverse String " << str << endl;
    return 0;
}
