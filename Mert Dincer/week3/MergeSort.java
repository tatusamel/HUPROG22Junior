public class MergeSort {
    public void mergeSort(int[] arr, int low, int high) {
        if (low < high) {
            int mid = low + (high - low) / 2; // to avoid overflow

            mergeSort(arr, low, mid); // sort left of the array
            mergeSort(arr, mid + 1, high); // sort right of the array

            // setting the sizes of the temporary subarrays and initializing them
            int l1 = mid - low + 1;
            int l2 = high - mid;
            int[] L = new int[l1];
            int[] R = new int[l2];
            // copying the values from the original array to temporary subarrays
            for (int i = 0; i < l1; i++) {
                L[i] = arr[low + i];
            }
            for (int i = 0; i < l2; i++) {
                R[i] = arr[mid + 1 + i];
            }

            // indexes are for merging two sorted subarrays
            int left_index = 0, right_index = 0;
            // current_index signifies the last added element's index from any of sorted subarrays
            int current_index = low;
            for (int i = 0; i < high - low + 1; i++) {
                // a condition to check if any of the subarrays are ran out of elements
                if (right_index < l2 && left_index < l1) {
                    // if the value of the left subarray's is less than or equal to right subarray's
                    if (L[left_index] <= R[right_index]) {
                        // than put the value of left subarray's into main array
                        arr[current_index] = L[left_index];
                        left_index++;
                        current_index++;
                    }
                    // if the value of the right subarray's is less than the left subarray's
                    else if (R[right_index] < L[left_index]) {
                        // than put the value of right subarray's into main array
                        arr[current_index] = R[right_index];
                        right_index++;
                        current_index++;
                    }
                }
                // if one of the subarrays' all elemenets are merged into main array
                else {
                    // if the empty array is right one
                    if (right_index == l2) {
                        for (int j = left_index; j < l1; j++) {
                            // fill the next available indexs with left subarray's elements
                            arr[current_index] = L[left_index];
                            current_index++;
                            left_index++;
                        }
                    }
                    // if the empty array is left one
                    else if (left_index == l1) {
                        for (int j = right_index; j < l2; j++) {
                            // fill the next available indexs with right subarray's elements
                            arr[current_index] = R[right_index];
                            current_index++;
                            right_index++;
                        }
                    }
                }
            }
        }
    }
}
