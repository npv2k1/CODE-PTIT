#include<iostream>

using namespace std;
int sum(int *a,int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int *a = new int[n]{1};
        int count =1;
        a[n-1]= s-n-1;
        int currentPoint=n-2;
        while(currentPoint >0){
            a[currentPoint]+=1;
            for(int i=currentPoint;i<n-1;i++){
                a[i]=1;
            }
            a[n-1]-=1;

            if(a[n-1]==1){
                currentPoint-=1;
            }
        }



    }
}