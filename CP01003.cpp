#include<iostream>
#include<math.h>
using namespace std;
bool isSnt(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

bool isTnt(int n){
    if(!isSnt(n)){
        return 0;
    }
    int sum=0;
    int d=n;
    while(d>0){
        int tmp=d%10;
        sum+=tmp;
        if(!isSnt(tmp)){
            return 0;
        }
        d=d/10;
    }
    if(!isSnt(sum)){
        return 0;
    }
    return 1;
}
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c=0;
        for(int i=a;i<=b;i++){
            if(isTnt(i)){
                c+=1;
            }
        }
        cout<<c<<endl;
    }
}
/**
 * @brief 
 * https://www.geeksforgeeks.org/c-program-to-check-prime-number/
 * 
 */