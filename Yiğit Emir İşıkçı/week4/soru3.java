import java.util.Scanner;

public class soru3 {
    public static int gcd(int a, int b) {
        while (b != 0) {
            int t = a;
            a = b;
            b = t % b;
        }
        return a;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int q = scanner.nextInt();
        int sayi1 = 0;
        int sayi2 = 0;
        int maxAbs = -1;
        for(int i=0;i<q;i++){
            int n = scanner.nextInt();
            for(int s1=1;s1<n;s1++){
                for(int s2 = n-s1;s2>0;s2--){
                    if(s1 == s2 || s1 == n-s1-s2 ||s2 == n-s1-s2){
                        continue;
                    }
                    if(gcd(s1,s2) == n-s1-s2){
                        if(Math.abs(s1-s2) > maxAbs){
                            maxAbs = Math.abs(s1-s2);
                            sayi1 = s1;
                            sayi2 = s2;
                        }
                    }
                }
            }
            System.out.println(sayi1 + " "+ sayi2 +" "+ (n-sayi1-sayi2));
        }
    }
}
