board = {}
for i=1,100 do
    board[i] = {}
    for j=1,100 do
        board[i][j] = 0
    end
end

sum=0
n = io.read("*number")

for i = 1,n do
    r = io.read("*number")
    c = io.read("*number")
    for j = c,c+9 do
        for k = r,r+9 do
            board[j][k] = 1
        end
    end
end

for i=1,100 do
    for j=1,100 do
        sum = sum + board[i][j]
    end
end

print(sum)
