t = int(input())
a = list(map(int,input().split()))
b = min(a)
c = a.count(b)
if(c>1):
    print("Still Rozdil")
else:
    print(a.index(b)+1)    