n = int(input())
def gt(n):
    res=1
    for i in range(1,n+1):
        res*=i
    return res
tong=0
for i in range(1,n+1):
    tong+=gt(i)
print(tong,end="")