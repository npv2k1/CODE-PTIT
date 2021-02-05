#include <iostream>
using namespace std;
unsigned long long int gt(int n){
    unsigned long long int res=1;
    for (int i = 1; i <= n; i++)
    {
        res*=i;
    }
    return res;
}
int main()
{
   int n;
   cin>>n;
   unsigned long long int sum=0;
   for(int i=1;i<=n;i++){
       sum+=gt(i);
   }
   cout<<sum;
}