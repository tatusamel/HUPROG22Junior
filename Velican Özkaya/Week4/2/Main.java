import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // time complexity her 1 input için O(1);
        int t,a,b;
        Scanner input = new Scanner(System.in);
        t=input.nextInt();
        for(int k=0;k<t;k++){
            a=input.nextInt();
            b=input.nextInt();
            int needed=a%b;
            if(needed>b/2){
                needed=b-needed;
            }
            System.out.println(needed);
        }
    }
}
