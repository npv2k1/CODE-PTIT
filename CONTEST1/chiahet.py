def modFact(n, p):
    if n >= p:
        return 0

    result = 1
    for i in range(1, n + 1):
        result = (result * i) % p

    return result


n, p = input().strip().split(' ')
if not modFact(int(n), 2**int(p)):
    print("YES")
else:
    print("NO")
