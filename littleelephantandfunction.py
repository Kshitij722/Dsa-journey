n = int(input())
a=[]
for i in range(1,n+1):
    a.append(i)
b=[]
b.append(a[n-1])
for i in range(n-1):
    b.append(a[i])
for i in range(n):
    print(b[i],end=" ")    