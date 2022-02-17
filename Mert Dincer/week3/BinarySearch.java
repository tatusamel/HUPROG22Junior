public class BinarySearch {
    public int binarySearch(int[] arr, int low, int high, int target) {
        int mid = low + (high - low) / 2;
        // if value is not appears in the list return -1
        if (high == low) return -1;

        // if value is found return the index
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            return binarySearch(arr, mid + 1, high, target);
        }
        else {
            return binarySearch(arr, low, mid, target);
        }
    }
}
