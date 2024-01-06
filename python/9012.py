t = int(input())
result = 0
for i in range(t):
    ans = []
    word = input()
    check = 0
    for j in range(len(word)):
        if word[j] == "(":
            ans.append(word[j])
        elif word[j] == ")":
            if len(ans) == 0:
                check = check + 1
            elif ans[-1] == "(":
                ans.pop()
    if len(ans) == 0 and check == 0:
        print("YES")
    else:
        print("NO")
