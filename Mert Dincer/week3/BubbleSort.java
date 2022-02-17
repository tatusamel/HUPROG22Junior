public class BubbleSort {
    public void bubbleSort(int[] arr) {
        int temp;
        int curr_max;
        int curr_max_index;
        boolean flag;
        // a do-while loop to iterate at least once to see if the list is sorted or not
        do {
            // flag is the termination condition for while loop
            // if it's false that means no swapping has occurred so all elements are sorted
            flag = false;
            curr_max_index = 0;
            curr_max = arr[0];
            // traversing from the 0 up to last index - 1 because every element's right
            // side is checked so last element is compared with its predecessor
            for (int i = 0; i < arr.length - 1; i++) {
                if (curr_max > arr[i + 1]) {
                    // swap if the current potential max value is greater than the element its following element
                    temp = arr[i + 1];
                    arr[i + 1] = curr_max;
                    arr[curr_max_index] = temp;
                    curr_max_index = i + 1;
                    // set flag as true means a swapping has occurred and sorting must continue at least once to see
                    // if there's any other item that's not sorted
                    flag = true;
                }
                else {
                    // if following item of curr_max is greater than or equal to it
                    // set it as new potential max value
                    curr_max =  arr[i + 1];
                    curr_max_index = i + 1;
                }
            }
        } while(flag);
    }
}
