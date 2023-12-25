function max(a,b,c)
    if a>b and a>c then
        return a
    elseif b>c and b>a then
        return b
    else 
        return c
    end
end

a = io.read("*number")
b = io.read("*number")
c = io.read("*number")

if a == b and b == c then
    print(10000 + a*1000)
elseif a==b or c==a then
    print(1000 + a*100)
elseif b==c then
    print(1000 + b*100)
else
    print(max(a,b,c)*100)
end