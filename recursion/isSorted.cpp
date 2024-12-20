#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

int main()
{
    int arr[5] = {0, 1, 6, 8, 10};

    int size = 5;
    bool ans = false;
    ans = isSorted(arr, size);
    cout << "isSorted : " << boolalpha << ans;
    return 0;
}