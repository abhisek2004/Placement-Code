import java.util.Arrays;
import java.util.Comparator;

class Item {
    int value, weight;

    Item(int value, int weight) {
        this.value = value;
        this.weight = weight;
    }
}

public class FractionalKnapsack {
    public static double getMaxValue(int W, Item[] items, int n) {
        Arrays.sort(items, new Comparator<Item>() {
            public int compare(Item o1, Item o2) {
                double r1 = (double) o1.value / o1.weight;
                double r2 = (double) o2.value / o2.weight;
                return Double.compare(r2, r1);
            }
        });

        double totalValue = 0;
        for (int i = 0; i < n; i++) {
            if (items[i].weight <= W) {
                W -= items[i].weight;
                totalValue += items[i].value;
            } else {
                totalValue += items[i].value * ((double) W / items[i].weight);
                break;
            }
        }
        return totalValue;
    }

    public static void main(String[] args) {
        Item[] items = {
                new Item(60, 10),
                new Item(100, 20),
                new Item(120, 30)
        };
        int W = 50;
        int n = items.length;
        System.out.println("Maximum value in Fractional Knapsack: " + getMaxValue(W, items, n));
    }
}
