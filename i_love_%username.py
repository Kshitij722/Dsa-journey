n = int(input())
a = list(map(int,input().split()))
mx,mn = 0,0
flag = 0
if(n!=1):
    if(a[0]>a[1]):
        mx = a[0]
        mn = a[1]
        flag+=1
    if(a[0]<a[1]):
        mx = a[1]
        mn = a[0]
        flag+=1
    if(a[0]==a[1]):
        mx = a[0]
        mn = a[0]    

    for i in range(2,n):
        if(a[i]>mx):
            mx = a[i]
            flag+=1
        if(a[i]<mn):
            mn = a[i]
            flag+=1
        else:
            flag+=0
    print(flag)                
else:
    print(0)