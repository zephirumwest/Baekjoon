n = int(input())
list = list(map(int, input().split()))
ans = n
for i in list:
    if i == 1:
        n = n-1
    for j in range(2,int(i**1/2)+1):
        if i % j == 0:
            n = n-1
            break

print(n)