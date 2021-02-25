#include <iostream>
#include <vector>
#include <algorithm>
typedef unsigned long long int ulli;
using namespace std;
const int mod = 1000000007;
// 0 1 1 2 3 5 8
int fib(int n)
{
    if (n <= 1)
        return n;
    int f1 = 0, f2 = 1, f;
    for (int i = 2; i <= n; i++)
    {
        f = (f1 + f2) % 1000000007;
        f1 = f2;
        f2 = f;
    }
    return f;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fib(n) << endl;
    }

    return 0;
}