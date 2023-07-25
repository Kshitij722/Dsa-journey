def solve():
    #function
    a = list(map(int,input().split()))
    a.sort()
    if(a[2]+a[1]>=10):
        print("YES")
    else:
        print("NO")    


for _ in range(int(input())):
    solve()