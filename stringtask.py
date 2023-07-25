s = input()
d = ['a','e','i','o','u','y']
a=[]
for i in s:
    if i.lower() not in d:
        a.append('.'+ i.lower()) 
for i in a:
    print(i,end='')