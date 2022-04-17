import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int t,n;
        Scanner input = new Scanner(System.in);
        t=input.nextInt();
        for(int k=0;k<t;k++){
            n=input.nextInt();
            if(n%2==0){
                System.out.println(2+" "+(n-3)+" "+1);
            }
            else{
                int a=2;
                int b=n-3;
                int c=1;
                while (a<b){
                    c=gcd(a,b);
                    if(a+b+c==n){
                        System.out.println(a+" "+b+" "+c);
                        break;
                    }
                    a++;
                    b--;
                }

            }
        }
    }
    public static int gcd(int a, int b) {
        if (b==0) return a;
        return gcd(b,a%b);
    }
}
