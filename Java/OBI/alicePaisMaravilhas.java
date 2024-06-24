import java.util.Scanner;

public class alicePaisMaravilhas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int countX = 0, countO = 0;
        for (char c : s.toCharArray()) {
            if (c == 'X') countX++;
            if (c == 'O') countO++;
        }
        if (countO > countX || countX - countO > 1) {
            System.out.println("?");
        } else if ((s.charAt(0) == 'X' && s.charAt(1) == 'X') || (s.charAt(1) == 'X' && s.charAt(2) == 'X')) {
            System.out.println("Alice");
        } else if ((s.charAt(0) == 'O' && s.charAt(1) == 'O') || (s.charAt(1) == 'O' && s.charAt(2) == 'O')) {
            System.out.println("Bob");
        } else {
            System.out.println("*");
        }
    }
}
//https://judge.beecrowd.com/pt/problems/view/3454