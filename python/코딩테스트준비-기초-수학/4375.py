while True:
    try:
        n = int(input())
    except:
        break
    cnt = 1
    k = 1
    ans = 0
    while k:
        chk = "1" * cnt
        if int(chk)%n == 0:
            print(cnt)
            break
        else:
            cnt += 1
