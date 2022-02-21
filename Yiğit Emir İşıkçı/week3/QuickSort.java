public class QuickSort {

    public static void quickSort(int[] arr, int lo, int hi){
        if(lo<hi){
            int q = partition(arr,lo,hi);
            quickSort(arr,lo,q-1);
            quickSort(arr,q+1,hi);
        }
    }
    public static int partition(int[] arr, int lo, int hi){
        int pivot = arr[lo];
        int j = hi;
        int i = lo+1;
        while(i<j){
            if(arr[i]>pivot && arr[j]<pivot){
                int temp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp1;
                i++;j--;
                continue;
            }
            if(arr[i]<pivot){
                i++;
            }
            if(arr[j]>pivot){
                j--;
            }

        }
        if(pivot<arr[i] && pivot<arr[j]){
            int temp2 = arr[j-1];
            arr[j-1] = arr[lo];
            arr[lo] = temp2;
            return j-1;
        }

        int temp2 = arr[j];
        arr[j] = arr[lo];
        arr[lo] = temp2;
        return j;

    }

    public static void main(String[] args) {
        int[] arr = {8,6,5,4,10,1,3,2,-1,-123,12,11};
        quickSort(arr,0,11);
        for(int i:arr)  {
            System.out.println(i);
        }
    }
}
