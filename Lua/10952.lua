a=1
b=1
repeat
    a = io.read("*number")
    b = io.read("*number")
    if a ~= 0 and b ~= 0 then
        print(a+b)
    end
until a == 0 and b == 0
