t = int(input())
while(t):
    n = int(input())
    a=list(map(lambda x:int(x),input().strip().split(' ')))
    res=[]
    res.append(a[n-1])
    for i in range(0,n):
        for j in range(i+1,n):
            if(a[j]>=a[i]): 
                break
            if(j==n-1):
                res.append(a[i])
    res.sort(reverse=True)
    for i in res:
        print(i,end=' ')
    print()
    t-=1
