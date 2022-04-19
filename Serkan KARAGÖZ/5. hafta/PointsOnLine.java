// This solution costed my hours of struggling and debugging.
// I was about to lose my sanity.
// Serkan Karagöz.

import java.util.Scanner;
public class PointsOnLine {

    public static void main(String[] args) {
	// write your code here

        Scanner scanner = new Scanner(System.in);

        int n;
        int d;

        n = scanner.nextInt();
        d = scanner.nextInt();

        int i; int j;
        long counter = 0;
        int[] arr = new int[n];
        for(i = 0; i < n; i++){
            arr[i] = scanner.nextInt();
        }

        i = 0; j = 1;


        // i stands for the index of leftmost possibly valid point
        // j stands for the index of rightmost possibly valid point
        /*
            if arr[i] and arr[j] are valid endpoints, then
            for i <= x < y+1 <= j
            are also index of valid endpoints
         */

        // The solution runs on O(N) and works like queue.
        // If valid points detect or j-i < 2, enqueue. (increase j by onr)
        // If invalid points occur, dequeue. (increase i by one)

        while(i < n-2){
            if(j < n-1 && (!(arr[j] - arr[i] > d) || j-i < 2)){
                j++;
            }
            else{
                // this else statement executes iff the i number needs to increase
                if(!(arr[j] - arr[i] > d)){
                    counter += (long) (j - i - 1) *(j-i)/2;
                }
                else if(!(arr[j-1] - arr[i] > d)){
                    // if arr[j] and arr[i] aren't valid endpoints
                    // but arr[j-1] and arr[i] are, add these combinations to counter.
                    counter += (long) (j - i - 2) *(j-i-1)/2;
                }
                i++;
            }
        }

        System.out.println(counter);
    }
}
