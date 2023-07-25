def solve():
    #function
    n , k , x = map(int,input().split())
    if(x!=1):
        print("YES")
        print(n)
        for i in range(n):
            print(1,end=" ")
        print()
    else:
        if(k==1):
            print("NO")
        elif(k==2):
            if(n%2==0):
                print("YES")
                print(n//2)
                for i in range(n//2):
                    print(2,end=" ")
                print()
            else:
                print("NO")
        else:
            if(n%2==0):
                print("YES")
                print(n//2)
                for i in range(n//2):
                    print(2,end=" ")
                print()
            else:    
                a = n//2
                b = (a-1)*2   
                print("YES")
                print(a)
                for i in range(a-1):
                    print(2,end=" ")
                print(3)
                print()                         


for _ in range(int(input())):
    solve()