import java.util.Scanner;

public class MinimumMove {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int a, b, rem;

        for (int i = 0; i < t; i++) {
            a = scanner.nextInt();
            b = scanner.nextInt();
            rem = a % b;
            if (rem < b - rem) {
                System.out.println(rem);
            }
            else{
                System.out.println((b - rem));
            }

        }

    }
}
