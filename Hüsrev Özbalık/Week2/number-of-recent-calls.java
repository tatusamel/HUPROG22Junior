class RecentCounter {
    MyBeautifulIntegerQueue queue = new MyBeautifulIntegerQueue();
    public RecentCounter() {

    }

    public int ping(int t) {
        if (queue.isEmpty()) {
            queue.enqueue(t);
            return 1;
        }
        else {
            queue.enqueue(t);
            int counter = 0;
            while (t - queue.top() > 3000) {
                queue.dequeue();
            }
            return queue.size();
        }
    }
}
class MyBeautifulIntegerQueue {
    private class Node {
        public Node(int data) {this.data = data;}

        int data;
        Node next = null;
    }

    private Node first = null;
    private Node last = null;
    private int size = 0;

    public int size() {return size;}


    public boolean isEmpty() {return first == null;}


    public void enqueue(int i) {
        if (isEmpty()) {
            first = new Node(i);
            last = first;
        }
        else {
            Node temp = first;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = new Node(i);
            last = temp.next;
        }
        size += 1;
    }


    public void dequeue() {
        if (!isEmpty()) {
            first = first.next;
            size -= 1;
        }
    }


    public int top() {return first.data;}
}
