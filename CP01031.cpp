#include <bits/stdc++.h>
using namespace std;

using namespace std;

int check(vector<int> a, int n, int sum)
{
    int l, r;
    sort(a.begin(), a.end());
    int ans = 0;

    // Every iteration of loop counts triplet with
    // first element as arr[i].
    for (int i = 0; i < n - 2; i++)
    {
        // Initialize other two elements as corner elements
        // of subarray arr[j+1..k]
        int j = i + 1, k = n - 1;

        // Use Meet in the Middle concept
        while (j < k)
        {
            // If sum of current triplet is more or equal,
            // move right corner to look for smaller values
            if (a[i] + a[j] + a[k] >= sum)
                k--;

            // Else move left corner
            else
            {
                // This is important. For current i and j, there
                // can be total k-j third elements.
                ans += (k - j);
                j++;
            }
        }
    }
    return ans;
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
        cout<<check(a, n, K);
        cout << endl;
    }
    return 0;
}
/**
 * @brief https://www.geeksforgeeks.org/count-triplets-with-sum-smaller-that-a-given-value/
 * 
 */