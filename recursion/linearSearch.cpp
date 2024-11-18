#include <iostream>
using namespace std;
bool lSearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        lSearch(arr + 1, size - 1, key);
    }
}
int main()
{
    int arr[5] = {2, 6, 17, 4, 8};
    int size = 5;
    int key;
    cout << "Enter a number: " << endl;
    cin >> key;
    bool ans = lSearch(arr, size, key);
    if (ans != 1)
    {
        cout << "false";
    }
    else
        cout << "true";
    return 0;
}