t = int(input())
for i in range(t):
    s = input()
    if(len(s)>10):
        b = s[0]
        c = s[-1]
        d = len(s)-2
        print(b + str(d) + c)
    else:
        print(s)    