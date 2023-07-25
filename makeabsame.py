# cook your dish here
t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    c=[]
    for i in range(n):
        if(a[i]!=b[i]):
            c.append(i)
    for i in c:
        if(a[i]==1):
            print("NO")
        else:
            if(a[i-1]==1 or a[i+1]==1):
                print("YES")
            else:
                print("NO")