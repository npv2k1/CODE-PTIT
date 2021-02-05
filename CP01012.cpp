#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPitago(int a,int b,int c){

  if(a*a==b*b+c*c || b*b==a*a+c*c || c*c ==a*a+b*b){
    return 1;
  }
  return 0;
}
void findPitago(vector<int> a,int n){
  for (int i = 0; i < n-2; i++)
  {
    
  }
  cout<<"NO";
  return;
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
    findPitago(a,n);
    cout<<endl;
  }
  return 0;
}