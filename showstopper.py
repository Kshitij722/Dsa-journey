t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    q = max(a)
    w = max(b)
    e = a.count(q)
    r = b.count(w)
    if(a[n-1] == q and b[n-1] == w):
        print("Yes")
    elif(a[n-1] == q and b[n-1]!=w):
        for i in range(n):
            if(b[i]==w):
                a[i],b[i] =b[i],a[i]
        if(a[n-1] == max(a) and b[n-1]== max(b)):
            print("Yes")
        else:
            print("No")
    elif(a[n-1] != q and b[n-1]==w):
        for i in range(n):
            if(a[i]==q):
                b[i],a[i] =a[i],b[i]
          
        if(b[n-1] == max(b) and a[n-1]==max(a)):
            print("Yes")
        else:
            print("No")
    else:
        print("No")                                        
# for i in range((int(input()))):
#     n=int(input())
#     a=list(map(int,input().split()))
#     b=list(map(int,input().split()))
#     for i in range(n):
#         if a[i]<b[i]:
#             a[i],b[i]=b[i],a[i]
#     if a[n-1]==max(a) and b[n-1]==max(b):
#         print("Yes")
#     else:
#         print("No")