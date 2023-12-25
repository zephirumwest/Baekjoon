i1,i2,i3 = map(int,input().split(":"))
i4,i5,i6 = map(int,input().split(":"))


r1 = i4-i1
if r1 < 0:
    r1 += 24
if i5<i2:
    r1-=1
    i5+=60
    if r1 < 0:
        r1 += 24
r2 = i5-i2
if i6<i3:
    r2-=1
    i6+=60
    if r2 < 0:
        r2+=60
        r1-=1
r3 = i6-i3 
    

print("%02d:%02d:%02d" % (r1,r2,r3))