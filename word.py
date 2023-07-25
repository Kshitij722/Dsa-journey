s = input()
low = 0
high = 0
for i in s:
    if (i.isupper()):
        high += 1
    else:
        low += 1
if (low > high):
    print(s.lower())
if (high > low):
    print(s.upper())
if (high == low):
    print(s.lower())
