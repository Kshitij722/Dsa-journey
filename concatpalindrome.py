from collections import Counter
t=int(input())
for i in range(t):
    n=list(map(int,input().split()))
    s1=input()
    s2=input()
    s=s1+s2
    c=Counter(s)
    b=0
    for i,j in c.items():
        b+=j%2
    if(b>1):
        print("NO")
    else:
        print("YES")    

    