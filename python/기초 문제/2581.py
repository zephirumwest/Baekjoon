m = int(input())
n = int(input())
result = [] 
for i in range(m,n+1):
    a = i-1
    if a == 1:
        result.append(2)
    while a > 0:
        if i % a == 0:
            break
        else:
            a -= 1
        if a == 1:
            result.append(i)
if sum(result) == 0:
    print(-1)
else:
    print(sum(result))
    print(result[0])