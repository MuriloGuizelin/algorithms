package OBI;
import java.util.Scanner;

public class torneio{
    public static void main(String[] args){
        int v = 0;
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i<6;i++){
            String s = sc.nextLine();
            if(s.equals("V")){
                v = v + 1;
            }
        }
        if(v > 4){
            System.out.println("1");
        }
        else if(v > 2){
            System.out.println("2");
        }
        else if(v > 0){
            System.out.println("3");
        }
        else{
            System.out.println("-1");
        }
    }
}