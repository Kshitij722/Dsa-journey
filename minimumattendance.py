t=int(input())
for i in range(t):
    n=int(input())
    a=input()
    c=a.count("1")
    r=120 - n
    if((r+c)>=90):
        print("YES")
    if((r+c)<90):
        print("NO")    
