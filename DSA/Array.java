public class Array {
    private final int MAX_SIZE = 1024;
    private int size;
    private int[] data;

    public Array() {
        this.size = 0;
        this.data = new int[MAX_SIZE];
    }

    public int size() {
        return this.size;
    }

    public int get(int index) {
        if (index >= 0 && index < this.size) {
            return this.data[index];
        } else {
            throw new IndexOutOfBoundsException("Array");
        }
    }

    public void insert(int index, int value) {
        if (index < 0 || index > this.size) {
            throw new IndexOutOfBoundsException("Array");
        }

        for (int i = this.size; i > index; i--) {
            this.data[i] = this.data[i-1];
        }
        this.data[index] = value;

        this.size += 1;
    }

    public int delete(int index) {
        if (index < 0 || index >= this.size) {
            throw new IndexOutOfBoundsException("Array");
        }

        int deleted = this.data[index];
        this.size -= 1;

        for (int i = index; i < this.size; i++) {
            this.data[i] = this.data[i+1];
        }

        return deleted;
    }

    public void display() {
        System.out.print("[");
        for (int i = 0; i < this.size - 1; i++) {
            System.out.printf("%d, ", this.data[i]);
        }
        System.out.printf("%d]\n", this.data[this.size - 1]);
    }

    public void bubble_sort() {
        int tmp;
        for (int i = 0; i < this.size - 1; i++) {
            for (int j = 0; j < this.size - i - 1; j++) {
                if (this.data[j] > this.data[j+1]) {
                    tmp = this.data[j];
                    this.data[j] = this.data[j+1];
                    this.data[j+1] = tmp;
                }
            }
        }
    }
}
