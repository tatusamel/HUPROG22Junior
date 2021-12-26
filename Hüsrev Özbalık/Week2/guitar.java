import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        MyBeautifulIntLinkedList[] strings = new MyBeautifulIntLinkedList[5];
        int moves = 0;

        Scanner scanner = new Scanner("5 15\n" +
                "2 8\n" +
                "2 10\n" +
                "2 12\n" +
                "2 10\n" +
                "2 5");
        int iSize = scanner.nextInt();
        int maxFret = scanner.nextInt();
        for (int i = 0; i < iSize; i++) {
            int string = scanner.nextInt() - 1;
            int fret = scanner.nextInt();
            MyBeautifulIntLinkedList tempList = strings[string];
            if (tempList == null) {
                strings[string] = new MyBeautifulIntLinkedList();
                strings[string].insert(fret);
                moves += 1;
            }
            else {
                while (tempList.last.data > fret) {
                    tempList.delete(tempList.last);
                    moves += 1;
                    if (tempList.isEmpty()) break;
                }
                if (tempList.isEmpty()) {
                    tempList.insert(fret);
                    moves += 1;
                }
                else {
                    if (tempList.last.data != fret) {
                        tempList.insert(fret);
                        moves += 1;
                    }
                }
            }
        }
        System.out.println(moves);
    }
}


class Node {
    public Node(int data) {this.data = data;}
    int data;
    Node next = null;
}


class MyBeautifulIntLinkedList {
    Node first = null;
    Node last = null;
    int size = 0;

    public void insert(int i) {
        if (isEmpty()) {
            first = new Node(i);
            last = first;
        }
        else {
            last.next = new Node(i);
            last = last.next;
        }
        size += 1;
    }


    public void delete(Node node) {
        if (!isEmpty()) {
            if (first == node) {
                if (last == first) last = null;
                first = first.next;
                size -= 1;
            }
            else {
                Node temp = first;
                while (temp.next != null) {
                    if (temp.next == node) {
                        if (temp.next == last) {
                            last = temp;
                            temp.next = null;
                        }
                        else {
                            temp.next = temp.next.next;
                        }
                        size -= 1;
                        break;
                    }
                    temp = temp.next;
                }
            }
        }
    }
    public boolean isEmpty() {return size == 0;}
}
