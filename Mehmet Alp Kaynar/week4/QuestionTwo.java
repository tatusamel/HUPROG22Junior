import java.util.Scanner;

public class QuestionTwo {
    public static void main(String[] args) {                       // O(1)
        Scanner scan = new Scanner(System.in);
        int test_case = scan.nextInt();
        for (int i = 0; i < test_case; i++){
            long a = scan.nextInt();
            long b = scan.nextInt();
            long rem = a%b;
            if (rem > b/2){
                System.out.println(b - rem);
            }
            else {
                System.out.println(rem);
            }
        }
    }
}
