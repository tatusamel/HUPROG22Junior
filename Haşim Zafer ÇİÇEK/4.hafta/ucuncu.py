def euclidean(a,b):
    reminder = a % b
    if reminder == 0:
        return b
    if reminder == 1:
        return 1
    euclidean(b,reminder)
"""
eğer n çift bir  sayı ise zaten n - 3 2 1 kombinasyonu uyuyor. Eğer tek ise 1 3 ün olup olmadığını denememiz lazım ve aynı mantıkla
gidip sayıyı inceledikçe aslında c nin her zaman 1 olması gerektiğini düşündüm çünkü c arttığı zaman gerekli şartı sağlama ihtimali
kalmıyordu veya b+c yüksek bir sayı oluyordu bu da maximum a-b değerini bulmamıza engel oluyordu bu yüzden her zaman 1 olması gerek
tiğini düşünüyorum fakat matematiksel olarak ispatlayamadım :( .
"""
t = int(input())
for i in range(t):
    n = int(input())
    a = n-3
    b = 2
    while euclidean(a,b) != 1:
        a -= 1
        b += 1
    print(b,a,1)