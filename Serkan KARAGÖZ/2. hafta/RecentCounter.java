import java.util.ArrayList;

public class RecentCounter {

    public ArrayList<Integer> numbers;



    public RecentCounter() {
        numbers = new ArrayList<>();

    }

    public int ping(int t) {


        numbers.add(t);
        int ind1 = numbers.size() - 1;
        int ind2 = numbers.size() - 1;
        int min = t - 3000;
        while(ind2 >= 0){
            if(numbers.get(ind2) <= t && numbers.get(ind2) >= min){
                ind2--;
            }
            else{
                break;
            }
        }
        return ind1- ind2;
    }
}
