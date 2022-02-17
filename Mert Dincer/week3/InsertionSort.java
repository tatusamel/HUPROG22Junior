public class InsertionSort {
    public void insertionSort(int[] arr) {
        int temp;
        // starting from 1 because first element is
        // considered as sorted
        for (int i = 1; i < arr.length; i++) {
            // traversing the array from the back because
            // if the value left of its is greater than it
            // their values will be swapped until it's no more
            for (int j = i - 1; j >= 0; j--) {
                // break if the item on the left is smaller or equal
                if (arr[j + 1] >= arr[j]) break;
                if (arr[j + 1] < arr[j]) {
                    // swap their values if the item on the left is smaller
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}
