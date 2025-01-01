n,m  = map(int,input().split())
arr1 = [[0 for j in range(m)] for i in range(n)]
arr2 = [[0 for j in range(m)] for i in range(n)]
result = [[0 for j in range(m)] for i in range(n)]

for i in range(n):
    num = list(map(int,input().split()))
    for j in range(m):
        arr1[i][j] = num[j]

for i in range(n):
    num = list(map(int,input().split()))
    for j in range(m):
        arr2[i][j] = num[j]

for i in range(n):
    for j in range(m):
        result[i][j] = arr1[i][j] + arr2[i][j]

for i in range(n):
    for j in range(m):
        print(result[i][j],end = " ")
    print("")
