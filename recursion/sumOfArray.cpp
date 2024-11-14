#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        int sum = arr[0] + getSum(arr + 1, size - 1);
        return sum;
    }
}

int main()
{
    int arr[5] = {1, 1, 1, 1, 1};
    int size = 5;

    // bool ans = false;
    int ans = getSum(arr, size);
    cout << "Sum is : " << ans;
    return 0;
}