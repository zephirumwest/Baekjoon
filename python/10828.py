import sys
n = int(sys.stdin.readline().rstrip())
list = []
for i in range(n):
    order = sys.stdin.readline().rstrip()
    if order[0:4] == "push":
        a = int(order[5:])
        list.append(a)
    elif order == "pop":
        if len(list) == 0:
            print(-1)
        else:
            print(list[-1])
            list.pop()
    elif order == "size":
        print(len(list))
    elif order == "empty":
        if len(list) == 0:
            print(1)
        else:
            print(0)
    elif order == "top":
        if len(list) == 0:
            print(-1)
        else:
            print(list[-1])