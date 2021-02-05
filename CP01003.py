t = int(input())
def isSnt(n):
    n=int(n)
    if(n<2): 
        return 0
    for i in range(2,int(n**0.5)+1):
        if(n%i==0): 
            return 0
    return 1
def isTnt(n):
    if(not isSnt(n)):
        return 0
    
    sum=0
    for i in str(n):
        sum+=int(i)
        if(not isSnt(i)):
            return 0
    if(not isSnt(sum)):
        return 0
    return 1
while(t):
    a,b=input().split(' ')
    a=int(a)
    b=int(b)
    c=0
    for i in range(a,b+1):
        if(isTnt(i)):
            c+=1
    print(c)
    t-=1
