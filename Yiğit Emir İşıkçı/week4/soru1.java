import java.util.Scanner;

public class soru1 {
    //Aciklama:

    /*
        -Oncelikle bunun cozumunu geeksforgeekste buldum ama mantigi soyle:
        -Herhangi bir n sayisinin en buyuk gcd si kendisidir ama bu soruda gcd sini aldigimiz 2 sayi ayni olamiyor.
        -N sayisinin 2. en buyuk gcd si de yarisidir. 1 den n e kadar olan sayilarda n in yarisi de olacagi icin n/2 dondurmemiz yetiyor.
        -Eger n tek ise de bir sey degismiyor ondan en kucuk cift sayinin yarisini aliyor gibi dusunuyoruz.
     */
    public static void main(String[] args) {
        Scanner scanner  = new Scanner(System.in);
        int q = scanner.nextInt();
        for(int i=0;i<q;i++){
            int n = scanner.nextInt();
            System.out.println(n/2);
        }
    }
}
