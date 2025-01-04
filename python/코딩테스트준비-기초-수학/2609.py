a,b = map(int,input().split())
aa = a
bb = b
while True:
    r = a % b
    if r != 0:
        a = b
        b = r
    else:
        break
print(b)
print(int(aa*bb/b))