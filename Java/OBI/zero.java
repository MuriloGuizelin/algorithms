package OBI;
import java.util.Stack;
import java.util.Scanner;

public class zero {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < n; i++) {
            int num = sc.nextInt();
            if (num == 0 && !stack.empty()) {
                stack.pop();
            } else if (num != 0) {
                stack.push(num);
            }
        }

        int sum = 0;
        for (int num : stack) {
            sum += num;
        }

        System.out.println(sum);
    }
}