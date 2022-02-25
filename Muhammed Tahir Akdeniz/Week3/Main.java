import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Random;

/* ::Sorting Algorithms Implementations::
* functions changes original array.
* They return also changed array (actually for testing)
*
* */


public class Main {

    static Random random = new Random();

    public static void main(String[] args) {

        int[] arr = {1, 100, 300, 22, 99, 78, 101, 102};
        System.out.println(Arrays.toString(arr) + '\n');

        System.out.println(Arrays.toString(bubbleSort(arr.clone())));
        System.out.println(Arrays.toString(insertionSort(arr.clone())));
        System.out.println(Arrays.toString(selectionSort(arr.clone())));

        System.out.println(Arrays.toString(quickSort(arr.clone())));
        System.out.println(Arrays.toString(mergeSort(arr.clone())));

    }

    static int[] insertionSort(int[] arr) {
        for (int keyIndex = 0; keyIndex < arr.length; keyIndex++) {
            for (int i = keyIndex - 1; i >= 0 ; i--) {
                if (arr[keyIndex] < arr[i]) {
                    int temp = arr[i];
                    arr[i] = arr[keyIndex];
                    arr[keyIndex] = temp;
                    keyIndex = i;
                }
                else break;
            }
        }
        return arr;
    }

    static int[] selectionSort(int[] arr) {
        for (int startingIndex = 0; startingIndex < arr.length; startingIndex++) {

            int minIndex = startingIndex;

            for (int i = startingIndex; i < arr.length; i++) {
                if (arr[minIndex] > arr[i]) {
                    minIndex = i;
                }
            }

            int temp = arr[minIndex];
            arr[minIndex] = arr[startingIndex];
            arr[startingIndex] = temp;

        }
        return arr;
    }

    static int[] bubbleSort(int[] arr) {
        for (int lastIndex = arr.length; lastIndex >= 0 ; lastIndex--) {
            for (int i = 0; i < lastIndex - 1; i++) {
                if (arr[i] > arr[i+1]) {
                    int temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        return arr;
    }

    static int[] mergeSort(int[] arr) {

        int arrLength = arr.length;
        int middleIndex = arrLength/2;

        if (arrLength > 1) {

            // divide array
            int[] firstSubArr = Arrays.copyOfRange(arr,0, middleIndex);
            int[] secondSubArr = Arrays.copyOfRange(arr, middleIndex, arrLength);

            // call recursions for each subArr
            mergeSort(firstSubArr);
            mergeSort(secondSubArr);

            // merge them to arr
            int j = 0;
            int k = 0;

            for (int i = 0; i < arrLength; i++) {

                if (j >= firstSubArr.length ) {
                    arr[i] = secondSubArr[k++];
                }
                else if (k >= secondSubArr.length ){
                    arr[i] = firstSubArr[j++];
                }
                else {
                    if (firstSubArr[j] > secondSubArr[k]) {
                        arr[i] = secondSubArr[k++];
                    }
                    else
                    {
                        arr[i] = firstSubArr[j++];
                    }
                }
            }
        }

        return arr;
    }

    static int[] quickSort(int[] arr) {

        int arrLength = arr.length;

        if (arrLength > 1) {

            int pivotIndex = random.nextInt(0, arrLength);

            int[] pivotArr = new int[arrLength];
            int[] smallerArr = new int[arrLength];
            int[] biggerArr = new int[arrLength];

            int s_i = 0;
            int b_i = 0;
            int p_i = 0;

            for (int i = 0; i < arrLength; i++) {
                if (arr[i] < arr[pivotIndex]) {
                    smallerArr[s_i++] = arr[i];
                }
                else if (arr[i] == arr[pivotIndex]){
                    pivotArr[p_i++] = arr[i];
                }
                else {
                    biggerArr[b_i++] = arr[i];
                }
            }
            pivotArr = Arrays.copyOfRange(pivotArr, 0, p_i);
            smallerArr = Arrays.copyOfRange(smallerArr, 0, s_i);
            biggerArr = Arrays.copyOfRange(biggerArr, 0, b_i);

            quickSort(smallerArr);
            quickSort(biggerArr);

            int index = 0;
            for (int i = 0; i < s_i; i++) {
                arr[index++] = smallerArr[i];
            }
            for (int i = 0; i < p_i; i++) {
                arr[index++] = pivotArr[i];
            }
            for (int i = 0; i < b_i; i++) {
                arr[index++] = biggerArr[i];
            }

        }
        return arr;
    }
}
