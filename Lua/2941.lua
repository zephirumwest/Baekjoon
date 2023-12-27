function cro(word)
    local sum = 0
    local i = 1
    while i <= string.len(word) do

        if string.sub(word,i,i+1) == "c=" or string.sub(word,i,i+1) == "c-" or string.sub(word,i,i+1) == "d-" 
        or string.sub(word,i,i+1) == "lj" or string.sub(word,i,i+1) == "nj" or string.sub(word,i,i+1) == "s=" 
        or string.sub(word,i,i+1) == "z=" then
            sum = sum + 1
            i = i+1
            
        elseif string.sub(word,i,i+2) == "dz=" then
            sum = sum + 1
            i = i+2
            
        else
            sum = sum+1
        end

        i = i+1
    
    end
    return sum
end

word = io.read("*line")
print(cro(word))

