#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fle(vector<int> a, int n)
{
    int number = a[0], count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == number)
        {
            count += 1;
        }
        if (a[i] != number)
        {
            if (count % 2 != 0)
            {
                cout << number;
                return;
                break;
            }
            number = a[i];
            count = 1;
        }
    }
    if (count % 2 != 0)
    {
        cout << number;
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        fle(a, n);
        cout << endl;
    }
}