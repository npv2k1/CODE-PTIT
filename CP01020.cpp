#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int c,m;
    cin >> c>>m;
    int a= c/m;
    if(a%2==0){
      cout<<"first";
    }
    else{
      cout<<"second";
    }
    
    cout << endl;
  }
  return 0;
}