str_input = input()
l, r, x = 0, 0, 0
str1 = []
str2 = []

for char in str_input:
    if char == 'L':
        l += 1
    else:
        r += 1

    str1.append(char)
    if l == r:
        str2.append(''.join(str1))
        str1 = []
        x += 1

print(x)

for i in range(x):
    print(str2[i])
