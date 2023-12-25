n = int(input())
num = list(map(int, input().split()))
result = []
for i in range(n):
    a = num[i]-1
    if a == 1:
        result.append(2)
    while a > 1:
        if num[i] % a == 0:
            break
        else:
            a -= 1
        if a == 1:
            result.append(num[i])

print(len(result))
