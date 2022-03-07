import java.util.Scanner;

public class QuestionOne {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int test_case = scan.nextInt();
        for (int i = 0; i < test_case; i++){
            int input = scan.nextInt();
            // inputa kadar olan ciftlerin en buyuk gcdsi ancak o sayinin yarisi olursa olur o yuzden sayi cift ise kendisi ve yarisi
            // cift degilse bir eksigi ve bir eksiginin yarisi
            if (input % 2 == 0){
                System.out.println((input / 2) + " " + (input));
            }
            else {
                System.out.println(((input - 1) / 2) + " " + (input -1));
            }
        }
    }
}
