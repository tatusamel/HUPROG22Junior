import java.util.Scanner;

public class QuestionThree {
    public static long gcd(long a, long b) {
        if (a == 0)
            return b;
        return gcd(b%a, a);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int test_case = scanner.nextInt();
        for (int i = 0; i < test_case; i++){
            long value = scanner.nextInt();
            // a ve b arasindaki farki genis tutmak icin a'nin 0'a en yakin b'nin ise inputumuza en yakin sayi olmasi gerekiyor
            // trick nokta a,b,c uclusunun farkli olması bu da a ve b nin birbirlerine asal olmasi ve c nin 1 gelmesi ile saglanabilir
            for (long j = 2; j < value; j++){
                if (gcd(j,value-j - 1) == 1)  {
                    System.out.println(j + " " + (value - j - 1) + " " + 1);
                    break;
                }
            }
        }
    }
}
