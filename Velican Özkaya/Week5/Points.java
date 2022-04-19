import java.util.ArrayList;
import java.util.Scanner;
public class Points {
    static int func(int number){
        int output=1;
        for(int i=4;i<=number;i++){
            output=(output*i);
        }
        return output;
    }
    public static void main(String[] args) {
        int n,d;
        Scanner input = new Scanner(System.in);
        n=input.nextInt();
        d=input.nextInt();
        ArrayList<Integer> numbers = new ArrayList<>();
        int k;
        int sum=0;
        for(int i=0;i<n;i++){
            k=input.nextInt();
            if(numbers.isEmpty()){
                numbers.add(k);
            }
            else{
                if(numbers.get(0)+d>=k){
                    numbers.add(k);
                }
                else {
                    if(numbers.size()>=3){
                        sum+=func(numbers.size());
                    }
                    while( !numbers.isEmpty() && numbers.get(0)+d<k){
                        numbers.remove(0);
                    }
                    numbers.add(k);
                }
            }
        }
        if(numbers.size()>=3){
            sum+=func(numbers.size());
        }
        System.out.println(sum);
    }
}
