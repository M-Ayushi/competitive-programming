import java.util.Scanner;

/**
 * Created by alok.mahajan on 26/03/2018.
 */
public class Hulk_705A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        scan.close();

        String hate = " that I hate";
        String love = " that I love";
        //String it = " it";
        String ans = "I hate";

        for (int i = 1; i < a; i++) {
            if(i % 2 == 0) {
                ans = ans + hate;
            }
            else {
                ans = ans + love;
            }
        }

        System.out.println(ans + " it");
    }
}
