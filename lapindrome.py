# cook your dish here
t = int(input())
for i in range(t):
    s = input()
    a = len(s)
    d = []
    c = []
    b = (a)//2
    if (a % 2 == 0):
        for i in range(b):
            d.append(s[i])
        for i in range(b,a):
            c.append(s[i])    
        q = sorted((c))
        w = sorted((d))
        if (q == w):
            print("YES")
        else:
            print("NO")
      

    if (a % 2 != 0):
      
        for i in range(b):
            d.append(s[i])
        for i in range(b+1, a):
            c.append(s[i])

        q = sorted((c))
        w = sorted((d))
        if (q == w):
            print("YES")
        else:
            print("NO")
