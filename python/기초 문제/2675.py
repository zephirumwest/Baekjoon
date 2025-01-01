t = int(input())
for i in range(t):
    r,s = input().split()
    r = int(r)
    string = list(s)

    for j in range(len(string)):
        for k in range(r):
            print(string[j],end = "")
    print("")


