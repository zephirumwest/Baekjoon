a = int(input())
i = 1
while a > 0:
    a -= i
    if a < 0:
        break
    i += 1
print(i-1)


