import java.util.ArrayList;
import java.util.Scanner;

public class CpointsOnLine {
    public static int binarySearch(ArrayList<Long> inputArray,long target) {

        //set the starting and ending indices
        int start = 0, ending = inputArray.size() - 1;
        int result = -1;

        while (start <= ending) {
            int mid = (start+ending)/2;
            if(inputArray.get(mid) == target){
                return mid;
            }
            if(inputArray.get(mid) > target){
                ending = mid-1;
            }
            else if(inputArray.get(mid) < target){
                start = mid +1;
            }
        }
        return ending;
    }
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        long d = scan.nextInt();
        ArrayList<Long> arr = new ArrayList<>();
        for(int i=0;i<n;i++){
            long temp = scan.nextInt();
            arr.add(temp);
        }
        //Bu kod 17. case de patlior ne yazik ki cok uzgunum
        /*
        long sum =0;
        for(int i=0;i<n;i++){
            int n2 = binarySearch(arr,arr.get(i)+d);
            for(int j=n2;j>=0;j--){
                if(j-i>=2 && arr.get(j)-arr.get(i)<=d){
                    long temp = j-i-1;
                    sum+= (temp*(temp+1))/2;
                    break;
                }
            }
        }
        System.out.println(sum);

         */
        long sum = 0;
        int start = 0;
        for(int i=2;i<n;i++){
            while(arr.get(i)-arr.get(start)>d){
                start++;
            }
            long temp = i-start-1;
            sum+= (temp*(temp+1))/2;
        }
        System.out.println(sum);
    }


}