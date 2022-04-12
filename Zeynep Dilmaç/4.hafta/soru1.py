#bu soruda hangi sayı verilirse verilsin en büyük gcd en fazla o sayının yarısı kadar olacaktır
#bu yüzden de tekse bir eksiğinin yarısını çiftse direk yarısını gcd olarak alırız ve çiftleri yazdırırız.
number=int(input())
if(number%2==0):
    print(number//2," ",number)
else:
    print((number-1)//2," ",(number-1))