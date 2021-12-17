h = 0
c = 0
a = input()
b = [i for i in input()]
for i in b:
    if i == "U":
        h += 1
    if i == "D":
        h -= 1
    if i == "U" and h == 0:
        c +=1
print(c)
