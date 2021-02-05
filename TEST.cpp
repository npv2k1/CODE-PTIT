// Program to find value of f(n)%5
#include <bits/stdc++.h>
using namespace std;

// function for obtaining remainder
int fnMod(int n)
{
  // calculate res based on value of n
  return (n % 4) ? 0 : 4;
}

// driver program
int main()
{
  int n = 4;
  cout << fnMod(n) << endl;
  n = 44;
  cout << fnMod(n);
  return 0;
}