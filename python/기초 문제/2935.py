def cal(a,sign,b):
    if sign == "+":
        print(a + b)
    else:
        print(a * b)

a = int(input())
sign = input()
b = int(input())

cal(a,sign,b)