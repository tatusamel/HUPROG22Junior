// Stack ile yapılacak gibi ama çözemedim
import java.util.ArrayList;
import java.util.EmptyStackException;
import java.util.List;


class Solution {
    public String removeOuterParentheses(String s) {
        MyBeautifulCharStack stack = new MyBeautifulCharStack();
        for (int i = 0; i < s.length(); i ++) {
            if (stack.isEmpty()) stack.push(s.charAt(i));
            else if (s.charAt(i) == '(' && stack.top() == ')') stack.pop();
            else stack.push(s.charAt(i));
        }
        return stack.toString();
    }
}

class MyBeautifulCharStack {
    List<Character> array;

    public MyBeautifulCharStack() {
        array = new ArrayList<>();
    }


    public boolean isEmpty() {return array.isEmpty(); }


    public void push(char var) {array.add(var);}
    public char top() {
        if (isEmpty()) throw new EmptyStackException();
        else return array.get(array.size() - 1);
    }
    public char pop() {
        if (isEmpty()) throw new EmptyStackException();
        else {
            char temp = array.get(array.size() - 1);
            array.remove(array.size() - 1);
            return temp;
        }
    }


    @Override
    public String toString() {
        StringBuilder bobTheBuilder = new StringBuilder();
        for (char i : array) {
            bobTheBuilder.append(i);
        }
        return bobTheBuilder.toString();
    }
}
