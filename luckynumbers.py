# cook your dish here
t=int(input())
for i in range(t):
    x=input()
    c=0
    for i in range(len(x)):
        if(x[i]=='7'):
            print("YES")
            c+=1
            break
    if(c==0):
        print("NO")