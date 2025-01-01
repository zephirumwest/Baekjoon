def cal(val,j):
    if j == "@":
        val *= 3
    elif j == "%":
        val += 5
    elif j == "#":
        val -= 7
    return val

a = int(input())

for i in range(a):
    data = list(input().split())
    value = float(data[0])
    del data[0]

    for j in data:
        value = cal(value,j)
    print("{:.2f}".format(value))



