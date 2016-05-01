import java.util.Scanner;

/**
 * Created by mahaa on 01/05/2016.
 */
public class Drinks200B {
    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        int no = n;
        double ans = 0;

        while (no > 0) {
            int i = scan.nextInt();
            ans = ans + i;

            no--;

        }
        ans = ans / n;
        System.out.println(ans);
    }
}
