# Herhangi bir a sayısının b sayısıyla olan max_gcd değerinin a ya eşit olabilmesi için
# b == a veya b == k*a eşitliklerinin sağlanması gerekmektedir. Verilen soruda b sayısı a ya eşit olamayacağından
# b == k*a ya eşittir. En büyük a değerini bulmak için k değerini alabileceğimiz en küçük değer olan 2 olarak seçeriz.
# a değeri sınır sayısının ikiyle bölümünün tam kısmına eşit olur ve b değeri de bu değerin iki katına eşit olur.
# Bu şekilde max_gcd değeri olan a yı ve verilen sınırlar içerisinde onun eşi olan b yi bulabiliriz.

border_num = int(input())

min_part_of_pair = border_num // 2
max_part_of_pair = min_part_of_pair * 2

print(min_part_of_pair,max_part_of_pair)
