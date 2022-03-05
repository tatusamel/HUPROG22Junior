import java.util.Scanner;
public class ThreeIntegers {


    /*
    public static boolean isPrime(int number){
        if(number < 2) return false;
        else if (number == 2) return true;
        int sqrt = (int)Math.sqrt(number);
        for (int i = 2; i < sqrt + 1; i++) {
            if (number % i == 0) return false;
        }
        return true;
    }
    public static int nextPrime(int number){
        while(! isPrime(++number)){ }
        return number;
    }*/
    public static int euclidGCD(int i1, int i2){
        if(i2 == 0) return i1;
        return euclidGCD(i2, i1 % i2);
    }
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int a, b, c, tempPrime, N;
        c = 1;

        for (int i = 0; i < t; i++) {
            N = scanner.nextInt();
            b = 2;
            a = N - 3;
            while(euclidGCD(a,b) != 1 && a > 1){
                a--;
                b++;
            }
            System.out.println(a + " " + b + " " + c);
            System.out.println(b + " " + a + " " + c);
        }
    }
}