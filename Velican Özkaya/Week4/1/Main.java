import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 2 farklı sayıdaki mümkün olan en yüksek ortak 'bölen' sayılardan küçük olandır.
        // bu yüzden n sayısının ortak bölenlerinden en büyüğü n/2 dir eğer n tek sayı ise
        // n/3 > (n-1)/2
        // 2n > 3n-3
        // 3 > n
        // n in tek olduğu durum için bakmıştık ve n in tam sayı olduğunu biliyoruz bu
        // eşitliği sağlıyan tek sayı 1 ve soruda 2<=n verilmiş o yüzden 1 de dahil değil
        // elimizdeki bütün sayılarda tek ise n den bir önceki sayının yarısı almak doğrudur u kanıtlamış olduk
        int t,n;
        Scanner input = new Scanner(System.in);
        t=input.nextInt();
        for(int m=0;m<t;m++){
            n=input.nextInt();
            if(n%2==1){
                n--;
            }
            System.out.println(n/2+" "+n);
        }

    }
}
