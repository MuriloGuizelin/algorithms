import java.util.Scanner;

public class coffee {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read input values
        int N = scanner.nextInt();
        int L = scanner.nextInt();
        int D = scanner.nextInt();

        // Total amount of coffee needed in milliliters
        int totalMillilitersNeeded = N * D;

        // Convert milliliters to liters, rounding up if necessary
        int requiredLiters = totalMillilitersNeeded / 1000;
        if (totalMillilitersNeeded % 1000 != 0) {
            requiredLiters += 1;
        }

        // Calculate the minimum number of L liter batches required
        int numBatches = requiredLiters / L;
        if (requiredLiters % L != 0) {
            numBatches += 1;
        }

        // The total liters prepared is the number of batches times L
        int totalLitersPrepared = numBatches * L;

        // Print the result
        System.out.println(totalLitersPrepared);
    }
}
