#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int x=0,y=0;
    char h='B';
    for(int i=0;i<n;i++){
        if(h=='B'){
            if(a[i]=='G'){
                y+=1;
            }
            else if(a[i]=='B'){
                y-=1;
            }
            else if (a[i] == 'L')
            {
                x -= 1;
                h='T';
            }
            else if (a[i] == 'D')
            {
                x += 1;
                h='D';
            }
        }
        else if (h == 'T')
        {
            if (a[i] == 'G')
            {
                x-=1;
            }
            else if (a[i] == 'B')
            {
                x+=1;
            }
            else if (a[i] == 'L')
            {
                y-= 1;
                h = 'N';
            }
            else if (a[i] == 'D')
            {
                y += 1;
                h = 'B';
            }
        }
        else if (h == 'N')
        {
            if (a[i] == 'G')
            {
                y -= 1;
            }
            else if (a[i] == 'B')
            {
                y += 1;
            }
            else if (a[i] == 'L')
            {
                x += 1;
                h = 'D';
            }
            else if (a[i] == 'D')
            {
                x -= 1;
                h = 'T';
            }
        }
        else if (h == 'D')
        {
            if (a[i] == 'G')
            {
                x += 1;
            }
            else if (a[i] == 'B')
            {
                x -= 1;
            }
            else if (a[i] == 'L')
            {
                y+= 1;
                h = 'B';
            }
            else if (a[i] == 'D')
            {
                y-= 1;
                h = 'N';
            }
        }
    }
}