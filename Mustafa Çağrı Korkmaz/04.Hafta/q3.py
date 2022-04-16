import math
number_of_test = int(input())

"""
while number_of_test != 0:
    summation_result = int(input())
    for i in range(2, summation_result):
        flag = False
        for j in range(summation_result-i-1,i,-1):
            gcd = math.gcd(i,j)
            if gcd+i+j == summation_result:
                print(i,j,gcd)
                flag = True
                break
        if flag:
            break
    number_of_test -= 1
"""


# İlk üstteki kodu yazdım, 999999999 vb. gibi sayılar girdiğimde patlıyordu.
# Sonucunu alabildiğim tüm değerlerde gcd 1 geldi örüntülü bir şekilde.
# Bu nedenle zamandan tasarruf olması açısından aşağıdaki kodu yazdım.
# 7 dışında summation_result >= 6 için çalışıyor.


while number_of_test != 0:
    summation_result = int(input())
    for i in range(2, summation_result-2):
        if math.gcd(i, summation_result - i - 1) == 1:
            print(i, summation_result - i - 1, 1)
            break
    number_of_test -= 1





