#include <bits/stdc++.h>
using namespace std;


using namespace std;

void check(vector<int> a, int n, int sum)
{
    int l, r;
    sort(a.begin(),a.end());

    for (int i = 0; i < n - 2; i++)
    {
        l = i + 1; 
        r = n - 1; 
        while (l < r)
        {
            if (a[i] + a[l] + a[r] == sum)
            {
                cout<<"YES";
                return;
            }
            else if (a[i] + a[l] + a[r] < sum)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
    }

    cout<<"NO";
    return ;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, K;
        cin >> n >> K;
        vector<int> a;
        for (int i = 0; i < n; ++i)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        check(a, n, K);
        cout << endl;
    }
    return 0;
}
/**
 * @brief 
 * Cho dãy số A[] gồm có N phần tử.
* Nhiệm vụ của bạn là hãy kiểm tra tồn tại bộ ba (i, j, k) mà A[i] + A[j] + A[k] = K cho trước hay không.
 * https://www.geeksforgeeks.org/count-number-triplets-product-equal-given-number/
 */