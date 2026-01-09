E,C,M = map(int,input().split()) # 15, 28, 19
while E != C or C != M:
    if E <= C and E <= M:
        E += 15
    elif C <= E and C <= M:
        C += 28
    elif M <= E and M <= C:
        M += 19
print(E)