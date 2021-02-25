#include <iostream>
#include <vector>
#include <algorithm>
typedef long long int lli;
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<lli> a;
    for (int i = 0; i < n; i++)
    {
        lli tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    int c = 0;
    for (int u = 0; u < n; u++)
    {
        for (int v = u + 1; v < n; v++)
        {
            if (a[u] > a[v])
            {
                c += 1;
            }
        }
    }
    cout << c << endl;

    return 0;
}