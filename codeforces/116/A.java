import java.util.Scanner;

/**
 * Created by alok.mahajan on 26/03/2018.
 */
public class Tram_116A {
    public static void main(String[] args) {
        int big = 0;
        int total = 0;
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        //System.out.println(n + " is the number of stops");

        int exit;
        int enter;
        int t;
        for (int i = 0; i < n; i++) {
            t = total;
            exit = scan.nextInt();
            total = total - exit;
            enter = scan.nextInt();
            total = total + enter;

            //System.out.println(t + " - " + exit + " + " + enter + " = " + total);

            if (total > big) {
                //System.out.println(total + " is greater than " + big);
                big = total;
            }
        }
        scan.close();

        System.out.println(big);
    }
}
