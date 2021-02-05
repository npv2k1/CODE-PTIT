#include<iostream>
#include<vector>
using namespace std;
void getFirst(vector<int> a,int n){
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] == a[i])
      {
        cout<< a[i];
        return;
      }
    }
  }
  cout<< "NO";
  return;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a;
    
    for(int i=0;i<n;i++){
      int tmp;cin>>tmp;
      a.push_back(tmp);
    }
    getFirst(a,n);
    cout<<endl;

  }
}