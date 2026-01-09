h_list = []
sum = 0
for i in range(9):
    height = int(input())
    h_list.append(height)
    sum += height
h_list.sort()
goal = sum - 100
Flag = True
i = 0 
while Flag:
    for j in range(i+1,9):
        a = h_list[i]
        b = h_list[j]
        if a + b == goal:
            h_list.remove(a)
            h_list.remove(b)
            Flag = False
            break
    i+=1
            
for i in range(7):
    print(h_list[i])