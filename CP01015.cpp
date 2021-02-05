#include <iostream>
#include <vector>
#include<string>
using namespace std;

int mod(string num, int a)
{
 
  int res = 0;
  for (int i = 0; i < num.length(); i++)
    res = (res * 10 + (int)num[i] - '0') % a;

  return res;
}
// int fnMod(int n)
// {
//   return (n % 4) ? 0 : 4;
// }
int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    string a;
    cin>>a;
    if(mod(a, 4)){
      cout<<0;
    }
    else{
      cout<<4;
    }


    cout << endl;
  }
}
/*
*https://www.geeksforgeeks.org/how-to-compute-mod-of-a-big-number/
https://www.geeksforgeeks.org/find-value-1n-2n-3n-4n-mod-5/
*/