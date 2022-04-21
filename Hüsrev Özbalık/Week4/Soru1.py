import math

t = int(input())

"""
Sayının en büyük gcd si kareköküyle olur.
"""

for i in range(t):
    n = int(input())
    flag = True
    for j in range(2,int(math.sqrt(n) + 1)):
        if n % j == 0:
            print(n // j)
            flag = False
            break
    if flag:
        print(1)
