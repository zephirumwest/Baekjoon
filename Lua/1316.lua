function check(word) 
    for i=1,string.len(word) do
        if string.sub(word,i,i) ~= string.sub(word,i+1,i+1) then
            for j=1,i-1 do
                if string.sub(word,j,j) == string.sub(word,i+1,i+1) then
                    return 0
                end
            end
        end
    end
    return 1
end

ans = 0
n = io.read("*line")
for i = 1,n do
    word = io.read("*line")
    ans = ans + check(word)
end

print(ans)

