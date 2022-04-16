# Bu soruda verilen her a,b sayı çiftinden b-(a%b) a yı arttırmamız gereken değeri,
# a%b ise a yı azaltmamız gereken değeri verir. Bu iki değerden minimum olanı seçerek
# a%b == 0 sonucuna en kısa hareketle ulaşabiliriz.
# Her bir a,b sayı çifti için O(1)'de sonuç ekrana yazdırılır.

number_of_test = int(input())
for i in range(number_of_test):
    numbers = list(map(int,input().split()))
    print(min(numbers[1] - (numbers[0] % numbers[1]),numbers[0] % numbers[1]))
