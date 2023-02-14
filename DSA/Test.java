import java.util.Random;

class Test {
    public static void main(String[] args) {
        Random rand = new Random();
        SinglyLinkedList a = new SinglyLinkedList();
        int val;

        for (int i = 0; i < 10; i++) {
            val = rand.nextInt(1000);
            System.out.println(val);
            a.insert(0, val);
        }

        a.insert(10, 0);

        a.display();
    }
}
