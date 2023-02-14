public class SinglyLinkedList {
    private static class Node {
        int data;
        Node next;

        Node(int value, Node next) {
            this.data = value;
            this.next = next;
        }
    }

    private int size;
    private Node head;

    public SinglyLinkedList() {
        this.size = 0;
        this.head = null;
    }

    public void insert(int index, int value) {
        if (index < 0 || index > this.size) {
            throw new IndexOutOfBoundsException("SinglyLinkedList");
        }

        if (index == 0) {
            this.head = new Node(value, this.head);
        } else {
            Node target = this.head;
            for (int i = 0; i < index - 1; i++) {
                target = target.next;
            }

            target.next = new Node(value, target.next);
        }

        this.size += 1;
    }
    
    public void display() {
        System.out.print("[");
        if (this.size > 0) {
            Node node = this.head;
            for (int i = 0; i < this.size - 1; i++) {
                System.out.printf("%d, ", node.data);
                node = node.next;
            }
            System.out.printf("%d", node.data);
        }
        System.out.println("]");
    }
}
