n = io.read("*number")
score = {}
max = 0
sum = 0

for i = 1,n do
    score[i] = io.read("*number")
    if score[i] > max then
        max = score[i]
    end
end 

for i = 1,n do
    score[i] = score[i]/max * 100
end

for i = 1,n do
    sum = sum + score[i]
end

print(sum/n)

