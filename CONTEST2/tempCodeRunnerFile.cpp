#include <iostream>
#include <vector>
#include <algorithm>
typedef unsigned long long int ulli;
using namespace std;
const int mod = 1000000007;
// 0 1 1 2 3 5 8
ulli fib(int n)
{
    ulli f[n + 1];
    ulli i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; i++)
        f[i] = (f[i - 1]%mod + f[i - 2]%mod)%mod;

    return f[n];
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fib(n)<<endl;
    }

    return 0;
}