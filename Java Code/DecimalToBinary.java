public class DecimalToBinary {
    public static String decimalToBinary(int num) {
        return Integer.toBinaryString(num);
    }

    public static void main(String[] args) {
        int num = 29;
        System.out.println("Binary representation of " + num + " is " + decimalToBinary(num));
    }
}
