def solve():
    #function
    s=[]
    c=""
    
    for i in range(8):
            x = list(input().strip())
            s.append(x)
    for i in range(8):
         for j in range(8):
              if(s[i][j]!='.'):
                   c+=s[i][j]
    print(c)                           

for _ in range(int(input())):
    solve()