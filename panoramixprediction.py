n, m = (map(int, input().split()))
prime = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]
c, d = 0, 0
for i in range(len(prime)):
    if (prime[i] == n):
        c += i
    if (prime[i] == m):
        d += i
        break


if (d != 0):
    if c+1 == d:
        print("YES")
    else:
        print("NO")
else:
    print("NO")
