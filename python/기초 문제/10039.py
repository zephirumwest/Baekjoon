list = []
for i in range(5):
    a = int(input())
    if a > 40:
        list.append(a)
    else:
        list.append(40)
print(int(sum(list)/len(list)))
