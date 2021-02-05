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

        int number = a[0], count = 0;
        int max = 0,res=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == number)
            {
                count += 1;
                if (count > max)
                {
                    res = a[i];
                    max = count;
                }
            }
            if (a[i] != number)
            {
                number = a[i];                
                count = 1;
            }
        }
        // cout<<res<<'-'<<max<<endl;
        if (max > n / 2)
        {
            cout << res;
        }
        else
        {
            cout << "NO";
        }
        
        cout << endl;
    }
}