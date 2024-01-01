t = io.read("*number")

for i=1,t do
    q = 0
    d = 0
    n = 0
    p = 0
    c = io.read("*number")
    while c>=25 do
        c = c-25
        q = q+1
    end
    while c>=10 do
        c = c-10
        d = d+1
    end
    while c>=5 do
        c = c-5
        n= n+1
    end
    while c>=1 do
        c = c-1
        p = p+1
    end
    print(q.." "..d.." "..n.." "..p)
end