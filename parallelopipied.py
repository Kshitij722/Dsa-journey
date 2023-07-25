import math
a1 , a2 , a3 = map(int,input().split())
a = math.sqrt((a1*a3)//a2)
b = math.sqrt((a1*a2)//a3)
c = math.sqrt((a2*a3)//a1)
sum1 = 4*(a+b+c)
print(int(sum1))