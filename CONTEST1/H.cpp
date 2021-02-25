#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        for (int i = 0; i < n - k + 1; i++)
        {
            vector<int>::iterator start = a.begin() + i;
            vector<int>::iterator end = a.begin() + i + k;
            cout << *max_element(start, end) << ' ';
        }
        cout << endl;
    }
}