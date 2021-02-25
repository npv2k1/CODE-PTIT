#include <iostream>
#include <algorithm>
typedef unsigned long long int ulli;
using namespace std;

// Hàm kiểm tra
bool isTriplet(ulli arr[], int n)
{
  // Tính bình phương mọi phần tử
  for (ulli i = 0; i < n; i++)
    arr[i] = arr[i] * arr[i];

  // Xắp xếp phần tử theo thứ tự tăng dần
  sort(arr, arr + n);


  for (int i = n - 1; i >= 2; i--)
  {

    ulli l = 0;
    ulli r = i - 1;
    while (l < r)
    {
      if (arr[l] + arr[r] == arr[i])
        return true;
      (arr[l] + arr[r] < arr[i]) ? l++ : r--;
    }
  }
  return false;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    ulli *a = new ulli[n]{0};
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
    }
    if (isTriplet(a, n))
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
    }
    cout << endl;
  }
}
/**
 * https://www.geeksforgeeks.org/find-pythagorean-triplet-in-an-unsorted-array/
 * https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/
 * Bài này cần thay đổi phạm vi biến thành ulli
 * O(n2)
*/