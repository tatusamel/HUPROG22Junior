public class SelectionSort {
    public void selectionSort(int[] arr) {
        // curr_min holds the minimum potential value
        // while iterating thorugh the list
        int curr_min ;
        int curr_min_index;
        for (int i = 0; i < arr.length - 1; i++) {
            // In every i th step of loop it's guarenteed that
            // the left side of the list is sorted in an ascending order
            curr_min_index = i;
            curr_min = arr[i];
            for (int j = i + 1; j < arr.length; j++) {
                // if the next item of curr_min is smaller than it
                // set it as new curr_min
                if (arr[j] < curr_min) {
                    curr_min = arr[j];
                    curr_min_index = j;
                }
            }
            // swap the unsorted minimum value with the i th element
            int temp = arr[i];
            arr[i] = curr_min;
            arr[curr_min_index] = temp;
        }
    }
}
