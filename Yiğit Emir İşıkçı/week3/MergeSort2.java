import java.util.ArrayList;

public class MergeSort2 {

    public static void mergeSort(ArrayList<Integer> arr){
        if(arr.size()>1) {


            ArrayList<Integer> left = new ArrayList<Integer>();
            for (int i = 0; i < arr.size() / 2; i++) {
                left.add(arr.get(i));
            }
            ArrayList<Integer> right = new ArrayList<Integer>();
            for (int i = arr.size() / 2; i < arr.size(); i++) {
                right.add(arr.get(i));
            }
            mergeSort(left);
            mergeSort(right);

            int i = 0;
            int j = 0;
            int k = 0;
            while (i < left.size() && j < right.size()) {
                if (left.get(i) < right.get(j)) {
                    arr.set(k, left.get(i));
                    i++;
                    k++;
                } else {
                    arr.set(k, right.get(j));
                    j++;
                    k++;
                }
            }
            while (i < left.size()) {
                arr.set(k, left.get(i));
                i++;
                k++;
            }
            while (j < right.size()) {
                arr.set(k, right.get(j));
                j++;
                k++;
            }
        }
    }



    public static void main(String[] args) {
        ArrayList<Integer> arrayList = new ArrayList<Integer>();
        arrayList.add(3);
        arrayList.add(2);
        arrayList.add(1);
        arrayList.add(5);
        arrayList.add(-33);
        arrayList.add(2);
        arrayList.add(3);
        arrayList.add(4);
        arrayList.add(-4);

        mergeSort(arrayList);

        for(int i:arrayList){
            System.out.println(i);
        }

    }
}
