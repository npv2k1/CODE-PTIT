#include <iostream>
#include <vector>
#include <algorithm>
typedef long long int lli;
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<lli> chan;
    vector<lli> le;
    for (int i = 1; i <= n; i++)
    {
        lli tmp;
        cin >> tmp;
        if (i % 2 == 0)
        {
            chan.push_back(tmp);
        }
        else
        {
            le.push_back(tmp);
        }
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), std::greater<>());
    int c = 0, l = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << chan[c] << ' ';
            c += 1;
        }
        else
        {
            cout << le[l] << ' ';
            l += 1;
        }
    }

    return 0;
}