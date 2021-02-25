def countTriplets(arr, n, sum):
    arr.sort()
    ans = 0
    for i in range(0, n-2):
        j = i + 1
        k = n-1
        while(j < k):
            if (arr[i]+arr[j]+arr[k] >= sum):
                k = k-1
            else:
                ans += (k - j)
                j = j+1

    return ans

if __name__ == '__main__':
    arr = [5, 1, 3, 4, 7]
    n = len(arr)
    sum = 12
    print(countTriplets(arr, n, sum))
