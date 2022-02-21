public class Main {
    public static void main(String[] args) {
        int[] numbers1 = {20,40,30,10,15,89,45,21,35};
        int[] numbers2 = {20,40,30,10,15,89,45,21,35};
        for(int i=0;i<numbers1.length;i++){
            System.out.print(numbers1[i]+"\t");
        }
        System.out.println();
        mergesort(numbers1);
        for(int i=0;i<numbers1.length;i++){
            System.out.print(numbers1[i]+"\t");
        }
        System.out.println();
        quicksort(numbers2);
        for(int i=0;i< numbers2.length;i++){
            System.out.print(numbers2[i]+"\t");
        }
    }
    public static void mergesort(int[] arr){
        if(arr.length==1){
            return;
        }
        int mid=arr.length/2;
        int[] arr1=new int[mid];
        for(int i=0;i<mid;i++){
            arr1[i]=arr[i];
        }
        mergesort(arr1);
        int[] arr2=new int[arr.length-mid];
        for(int i=mid;i<arr.length;i++){
            arr2[i-mid]=arr[i];
        }
        mergesort(arr2);
        int i=0;
        int j=0;
        int k=0;
        while (k<arr.length ){
            if(i<arr1.length && j<arr2.length){
                if(arr1[i]<arr2[j]){
                    arr[k]=arr1[i];
                    i++;
                }
                else{
                    arr[k]=arr2[j];
                    j++;
                }
            }
            else if(i<arr1.length){
                arr[k]=arr1[i];
                i++;
            }
            else if(j<arr2.length){
                arr[k]=arr2[j];
                j++;
            }
            k++;
        }
    }

    public static void quicksort(int[] arr){
        quicksort(arr,0,arr.length-1);
    }
    public static void quicksort(int[] arr, int low, int high){
        if(low>=high){
            return;
        }
        int startlow=low;
        int starthigh=high;
        int marker=arr[high];
        high--;
        while (low<=high){
            if(arr[low]>marker){
                if(arr[high]<marker){
                    int temp=arr[low];
                    arr[low]=arr[high];
                    arr[high]=temp;
                    low++;
                }
                high--;
            }
            else {
                low++;
            }
        }
        if(arr[high]<marker){
            high++;
        }
        arr[starthigh]=arr[high];
        arr[high]=marker;
        quicksort(arr,startlow,high-1);
        quicksort(arr,high+1,starthigh);
    }
}
