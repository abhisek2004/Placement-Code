public class NumberToWords {
    private static final String[] belowTen = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
            "Nine" };
    private static final String[] belowHundred = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy",
            "Eighty", "Ninety" };
    private static final String[] thousands = { "", "Thousand", "Million", "Billion" };

    public static String convertToWords(int num) {
        if (num == 0)
            return "Zero";

        StringBuilder words = new StringBuilder();
        int thousandIndex = 0;

        while (num > 0) {
            if (num % 1000 != 0) {
                words.insert(0, helper(num % 1000) + thousands[thousandIndex] + " ");
            }
            num /= 1000;
            thousandIndex++;
        }

        return words.toString().trim();
    }

    private static String helper(int num) {
        if (num == 0)
            return "";
        if (num < 10)
            return belowTen[num] + " ";
        if (num < 100)
            return belowHundred[num / 10] + " " + belowTen[num % 10] + " ";
        return belowTen[num / 100] + " Hundred " + helper(num % 100);
    }

    public static void main(String[] args) {
        int num = 12345;
        System.out.println(num + " in words is: " + convertToWords(num));
    }
}
