import java.util.Scanner;

public class PairOfGCD {

    public static int[][] gcdList;

    public static int min(int number1, int number2){
        return number1 < number2 ? number1 : number2;
    }
    public static int max(int number1, int number2){
        return number1 > number2 ? number1 : number2;
    }


    public static void main(String[] args) {
	// write your code here
        Scanner scanner = new Scanner(System.in);


        int sayi = scanner.nextInt();

        int GCD;

        /*
             This method of finding maximum GCD pair works properly
             because maximum value of any gcd(a,b) must be equal to a or b.

             Since a and b can't be equal to each other because of constrains,
             If a is greater than and multiple of b, then  maximum value of gcd(a,b) must be
             b. If this conditions satisfied, then maximum value of b must be a/2.

             For this, we must find the largest a value which is divisible by 2.
        */

        for(int i = 0; i < sayi;i++){
            GCD = scanner.nextInt();
            GCD /= 2; // Applying integer division.
            System.out.println(GCD + " " +(2*GCD));
        }



    }
}
