import java.util.Scanner;
public class Jury {
    static int func(int number){
        int output=1;
        for(int i=2;i<=number;i++){
            output=(output*i)%998244353;
        }
        return output;
    }
    public static void main(String[] args) {
        int t;
        Scanner input = new Scanner(System.in);
        t=input.nextInt();
        for(int i=0;i<t;i++){
            int n;
            n=input.nextInt();
            int max=0;
            int howmanymax=0;
            int secondmax=0;
            int k;
            for(int j=0;j<n;j++){
                k=input.nextInt();
                if(k>max){
                    secondmax=max;
                    howmanymax=1;
                    max=k;
                }
                else if(k==max){
                    howmanymax++;
                }
            }
            if(max-secondmax>1 && secondmax!=0){
                System.out.println(0);
            }
            else{
                if(howmanymax>1){
                    System.out.println(func(n));
                }
                else{
                    System.out.println(func(n-1));
                }
            }
        }
    }
}
