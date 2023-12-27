function mysplit (inputstr, sep)
    if sep == nil then
       sep = "%s"
    end
    local t={}
    for str in string.gmatch(inputstr, "([^"..sep.."]+)") do
       table.insert(t, str)
    end
    return t
end

word = io.read("*line")
ans = mysplit(word," ")
num = ans[1]
form = ans[2]
cnum = {}
sum = 0

for i=1,string.len(num) do
    if string.sub(num,i,i) == "0" then cnum[i] = 0
    elseif string.sub(num,i,i) == "1" then cnum[i] = 1
    elseif string.sub(num,i,i) == "2" then cnum[i] = 2
    elseif string.sub(num,i,i) == "3" then cnum[i] = 3
    elseif string.sub(num,i,i) == "4" then cnum[i] = 4
    elseif string.sub(num,i,i) == "5" then cnum[i] = 5
    elseif string.sub(num,i,i) == "6" then cnum[i] = 6
    elseif string.sub(num,i,i) == "7" then cnum[i] = 7
    elseif string.sub(num,i,i) == "8" then cnum[i] = 8
    elseif string.sub(num,i,i) == "9" then cnum[i] = 9
    elseif string.sub(num,i,i) == "A" then cnum[i] = 10
    elseif string.sub(num,i,i) == "B" then cnum[i] = 11
    elseif string.sub(num,i,i) == "C" then cnum[i] = 12
    elseif string.sub(num,i,i) == "D" then cnum[i] = 13
    elseif string.sub(num,i,i) == "E" then cnum[i] = 14
    elseif string.sub(num,i,i) == "F" then cnum[i] = 15
    elseif string.sub(num,i,i) == "G" then cnum[i] = 16
    elseif string.sub(num,i,i) == "H" then cnum[i] = 17
    elseif string.sub(num,i,i) == "I" then cnum[i] = 18
    elseif string.sub(num,i,i) == "J" then cnum[i] = 19
    elseif string.sub(num,i,i) == "K" then cnum[i] = 20
    elseif string.sub(num,i,i) == "L" then cnum[i] = 21
    elseif string.sub(num,i,i) == "M" then cnum[i] = 22
    elseif string.sub(num,i,i) == "N" then cnum[i] = 23
    elseif string.sub(num,i,i) == "O" then cnum[i] = 24
    elseif string.sub(num,i,i) == "P" then cnum[i] = 25
    elseif string.sub(num,i,i) == "Q" then cnum[i] = 26
    elseif string.sub(num,i,i) == "R" then cnum[i] = 27
    elseif string.sub(num,i,i) == "S" then cnum[i] = 28
    elseif string.sub(num,i,i) == "T" then cnum[i] = 29
    elseif string.sub(num,i,i) == "U" then cnum[i] = 30
    elseif string.sub(num,i,i) == "V" then cnum[i] = 31
    elseif string.sub(num,i,i) == "W" then cnum[i] = 32
    elseif string.sub(num,i,i) == "X" then cnum[i] = 33
    elseif string.sub(num,i,i) == "Y" then cnum[i] = 34
    elseif string.sub(num,i,i) == "Z" then cnum[i] = 35
    end
end

j = #cnum
for i= 1,#cnum do
    sum = sum + (cnum[i] * (form^(j-1)))
    j = j-1
end

print(math.floor(sum))