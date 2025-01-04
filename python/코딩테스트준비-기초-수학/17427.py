n = int(input())
ans = 0
for i in range(1,n+1):
    plus = n // i * i
    ans = ans+plus
print(ans)
