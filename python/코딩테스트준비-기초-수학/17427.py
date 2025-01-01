n = int(input())
div = [[]]
list = []
where = 0
for i in range(n):
    list.append(i+1)

while list:
    target = list[-1]
    for j in range(1,int(target**(1/2)) + 1):
        if target % j == 0: 
            div[where].append(j)
            if target**(1/2) != j:
                div[where].append(j)

        div[where].sort()
        while len(div[where]) > 3:
            div[where+1] = div[where].copy
            div[where+1].pop
            del div[where+1][-2]
            where = where + 1
    list.pop()

print(sum(div))
