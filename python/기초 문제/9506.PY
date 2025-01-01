def cout(list,n):
    print(n,"=",list[0],end = "")
    for i in range(1,len(list)-1):
        print(" + ",end = "")
        print(list[i],end = "")
    print(" +",list[len(list)-1])
        
n = 1
while n != -1:
    n = int(input())
    if n == -1:
        break
    list = []
    for i in range(1,n):
        if n % i == 0:
            list.append(i)
        
    if sum(list) == n:
        cout(list,n)
    else:
        print(n,"is NOT perfect.")