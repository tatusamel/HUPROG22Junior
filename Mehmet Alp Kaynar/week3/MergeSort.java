public class MergeSort {
    static void mergesort(int arr[], int mid){
        if(mid < 2){
            return;
        }

        int[] left_arr = new int[mid/2];
        int[] right_arr = new int[mid - mid/2];

        for (int i = 0; i < mid/2; i++){
            left_arr[i] = arr[i];
        }
        for (int i = mid/2; i < mid; i++){
            right_arr[i - mid/2] = arr[i];
        }

        mergesort(left_arr, mid / 2);
        mergesort(right_arr, mid - mid/2);
        merge(arr, left_arr,right_arr,mid);

    }

    static void merge(int[] arr, int[] left_arr, int[] right_arr, int mid){
        int i = 0, j = 0, k = 0, left = mid/2, right = mid - mid/2;

        while (i < left && j < right){
            arr[k++] = left_arr[i] < right_arr[j] ? left_arr[i++] : right_arr[j++];
        }
        while (i < left){
            arr[k++] = left_arr[i++];
        }
        while (j < right){
            arr[k++] = right_arr[j++];
        }
    }
}
