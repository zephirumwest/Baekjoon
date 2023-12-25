x = int(input())
n = int(input())

list1 = []
list2 = []
sum = 0

for i in range(0,n):
    a, b = map(int, input().split())
    list1.append(a)
    list2.append(b)

    sum += list1[i] * list2[i]

if sum == x:
    print("Yes")

else:
    print("No")
