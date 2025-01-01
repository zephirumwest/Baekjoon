def son(a,b,c):
    i = 1
    while True:
        if a + b*i < c*i:
            return i
        else:
            i += 1
        if b >c:
            return -1

a,b,c = map(int,input().split())
print(son(a,b,c))

