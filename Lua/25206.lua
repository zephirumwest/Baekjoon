function g2c()
    for i=1,20 do
        if grade[i] == "A+" then
            grade[i] = 4.5
        elseif grade[i] == "A0" then
            grade[i] = 4.0
        elseif grade[i] == "B+" then
            grade[i] = 3.5
        elseif grade[i] == "B0" then
            grade[i] = 3.0
        elseif grade[i] == "C+" then
            grade[i] = 2.5
        elseif grade[i] == "C0" then
            grade[i] = 2.0
        elseif grade[i] == "D+" then
            grade[i] = 1.5
        elseif grade[i] == "D0" then
            grade[i] = 1.0
        elseif grade[i] == "F" then
            grade[i] = 0.0
        else 
            grade[i] = 0.0
        end
    end
end

input = {}
credit = {}
grade = {}
sum = 0
credit_sum = 0

for i=1,20 do
    input[i] = io.read()
    if string.sub(input[i],-1,-1) ~= "F" and string.sub(input[i],-1,-1) ~= "P" then
        credit[i] = string.sub(input[i],-6,-4)
        grade[i] = string.sub(input[i],-2,-1)
    elseif string.sub(input[i],-1,-1) == "F" then
        credit[i] = string.sub(input[i],-5,-3)
        grade[i] = string.sub(input[i],-1,-1)
    else
        credit[i] = "0"
        grade[i]= 0
    end
    credit[i] = tonumber(credit[i])
end

g2c()

for i=1,20 do
    sum = sum + credit[i] * grade[i]
    credit_sum = credit_sum + credit[i]
end

print(sum/credit_sum)


