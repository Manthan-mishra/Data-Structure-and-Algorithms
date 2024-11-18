#include <iostream>
using namespace std;
bool bSearch(int arr[], int lPtr, int rPtr, int key)
{
    if (lPtr > rPtr)
        return false;

    int mid = lPtr + rPtr;
    if (arr[mid] == key)
        return true;

    else
        arr[mid] > key ? bSearch(arr, lPtr, mid - 1, key) : bSearch(arr, mid + 1, rPtr, key);
}
int main()
{
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int size = 6;
    int key;
    int lPtr = 0;
    int rPtr = size - 1;
    cout << "Enter a key: " << endl;
    cin >> key;
    bool ans = bSearch(arr, lPtr, rPtr, key);
    ans != 1 ? cout << "false" : cout << "true";
    return 0;
}