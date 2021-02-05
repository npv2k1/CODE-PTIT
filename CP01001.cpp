#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long int n=0;
        cin>>n;
        unsigned long long int sum = n*(n+1)/2;
        cout<<sum<<endl;
    }
}