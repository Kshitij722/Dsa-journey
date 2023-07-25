t = int(input())
a = list(map(int,input().split()))
b = a.count(5)
c = len(a) - b
if(b!=len(a)):
    if(b>=9):
        d= b//9
        print('5'*(9*d)+'0'*c)
    else:
        print(0)    
else:
    print(-1)        