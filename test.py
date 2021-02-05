def isSnt(n):
    n = int(n)
    if(n < 2):
        return 0
    for i in range(2, int(n**0.5)+1):
        if(n % i == 0):
            return 0
    return 1


def isTnt(n):
    if(not isSnt(n)):
        return 0

    sum = 0
    for i in str(n):
        sum += int(i)
        if(not isSnt(i)):
            return 0
    print(str(n)+':'+str(sum))
    if(not isSnt(sum)):
        return 0
    return 1
print(isSnt(4))
