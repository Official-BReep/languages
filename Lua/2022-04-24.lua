-- This is a Comment
--[[
    This is a comment
    with more lines
]] --------------------------------------------------------------------------------
-- 1. Varablen und flow control
--------------------------------------------------------------------------------
num = 30 -- All numbers are doubles

s = 'walternate'
t = "This is possible too"
u = [[String over
multiple lines]]

t = nil -- Undefines
io.write(s)

while num < 50 do -- while and do
    num = num + 1 -- No ++ or += operators
end -- schließe schleifen, funktionen und Bedingungen mit end

-- If-clauses
if num > 40 then -- if and then
    print('\nover 40')
elseif s ~= "walternate" then
    io.write('not over 40\n')
else
    thisisGlobal = 5 -- Variables are global by default
    local line = io.read() -- reads next stdin line

    print("Winter is coming, " .. line) -- string concatenation with ..
end

-- Undefinied varables return nil, this is not an error
foo = anUnownVariable -- now foo = nil

aBoolValue = true

-- 0 and '' are true, only nil and false are false
if not aBoolValue then print("twas false") end

--[['or' and 'and' are short-circuited
similar to the a?b:c operator in js]]
ans = aBoolValue and 'yes' or 'no' -- > 'no'

karlSum = 0
for i = 1, 100 do -- This range includes both ends
    karlSum = karlSum + i
end

-- Use "100, 1, -1" as the range to count down
fredSum = 0
for j = 100, 1, -1 do fredSum = fredSum + j end

-- Another loop construct
repeat
    print('the way of the future')
    num = num - 1
until num == 49

--------------------------------------------------------------------------------------------------------------
-- 2. Functions
--------------------------------------------------------------------------------------------------------------
function fib(n)
    if n < 2 then return 1 end
    return fib(n-2)+fib(n-1)
end