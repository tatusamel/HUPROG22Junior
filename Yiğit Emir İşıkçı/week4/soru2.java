import java.util.Scanner;

public class soru2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int q = scanner.nextInt();
        for(int i=0;i<q;i++){
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            if(a>=b){
                int rem = a%b;
                int bolum = a-rem;
                int c = bolum+b;
                int rval = c-a;
                if(rval>rem){
                    rval =rem;
                }
                System.out.println(rval);
            }
            else{
                if(a>b-a){
                    System.out.println(b-a);
                }
                else{
                    System.out.println(a);
                }
            }
        }
    }
}
