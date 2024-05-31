import java.util.Scanner;

public class coffee {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int L = scanner.nextInt();
        int D = scanner.nextInt();
        int i = 2;


        int res = N * D;
        if(L*1000 >= res){
            System.out.println(L);
        }
        else{
            while(true){
                if(L*1000*i >= res){
                    System.out.println(L*i);
                    break;
                }
                i++;
            }
        }
    }
}
//https://judge.beecrowd.com/pt/problems/view/3416