public class SwapNumbers {
    public static void swap(int a, int b) {
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("Swapped values: a = " + a + ", b = " + b);
    }

    public static void main(String[] args) {
        int a = 5, b = 10;
        swap(a, b);
    }
}
