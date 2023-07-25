t = int(input())
for i in range(t):
        n = int(input())
        s = input()
        a = 0
        b,c=[],[]
        cmp=0
        for i in range(n-1):
             cmp+=1
             if(s[i] != s[i+1]):
                  c.append(cmp)
                  cmp=0
        c.append(n-sum(c)+1)
                        
        # c = list(set(s))
        # print(c)
        ind = 0
        ans = ""
        for i in range(len(c)):
            if(c[i]%2!=0 ):
                ans += s[ind]
                ind += c[i]
            else:
                ans += s[ind]*2
                ind += c[i]
        # sorted(b)
        print(ans)
# import sys
# input = sys.stdin.readline

# def solve():
#     n = int(input())
#     s = input().strip()
#     v = []
#     cmp = 0
#     for i in range(n):
#         cmp += 1
#         if i < n-1 and s[i] != s[i + 1]:
#             v.append(cmp)
#             cmp = 0
#     ans = ""
#     ind = 0
#     for i in range(len(v)):
#         if v[i] % 2:
#             ans += s[ind]
#             ind += v[i]
#         else:
#             ans += s[ind]*2
#             ind += v[i]
#     print(ans)

# t = int(input())
# for _ in range(t):
#     solve()