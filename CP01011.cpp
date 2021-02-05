#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
      int tmp;
      cin>>tmp;
      a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    int kc = a[n-1]-a[0];
    for(int i=1;i<n;i++){
      if(a[i]-a[i-1]<kc){
        kc=a[i]-a[i-1];
        if(kc==0) break;
      }
    }
    cout<<kc<<endl;
  }
  return 0;
}