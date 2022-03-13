"""
eğer n değeri çift ise verilen bütün çiftler arasındaki en büyük gdp n/2 olacaktır(n ve n/2 arasında). Daha büyük
bir değer olamaz çünkü n / 2 den büyük sayıların 2 veya ondan daha büyük bir sayı ile çarpımı n den büyük bir sayıyı verir.
eğer n değeri tek ise verilen bütün çiftler arasındaki en büyük gdp (n-1) / 2 olacaktır (n-1 ve n/2) yukarıdaki ile aynı mantık
fakat n için değil n-1 için geçerli oluyor çünkü n tek sayı olduğundan 2 ye bölünemez
"""
"""
artistlik olsun diye euclidean functionu da alta bırakıyorum.
def euclidean(a,b):
    reminder = a % b
    if reminder == 0:
        return b
    if reminder == 1:
        return 1
    euclidean(b,reminder)
"""
t = int(input())
for i in range(t):
    n = int(input())
    print(n)
