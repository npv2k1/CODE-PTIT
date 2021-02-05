#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int *a = new int[n]{0};
        vector<int> res;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        res.push_back(a[n-1]);
        for(int i=n-2;i>=1;i--){
           for(int j=i+1;j<n;j++){
               if(a[j]>=a[i]){
                   break;
               }
               if(j==n-1){
                   res.push_back(a[i]);
               }
           }
        }
        sort(res.begin(),res.end());
        for (int i = res.size()-1; i >=0; i--)
        {
            cout<<res[i]<<' ';
        }
        cout<<endl;
    }
}