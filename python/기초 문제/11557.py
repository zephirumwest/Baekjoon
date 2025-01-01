t = int(input())
for i in range(t):
    n = int(input())
    list_school = []
    list_soju = []
    for j in range(n):
        s,l = input().split()
        l = int(l)
        list_school.append(s)
        list_soju.append(l)
    pos = list_soju.index(max(list_soju))
    print(list_school[pos])

