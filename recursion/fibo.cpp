#include <iostream>
using namespace std;

int fibo(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return fibo(num - 1) + fibo(num - 2);
}
int main()
{
    int num;
    cout << "Please provide a number" << endl;
    cin >> num;
    int ans = fibo(num);
    cout << "answer is " << ans;
    return 0;
}