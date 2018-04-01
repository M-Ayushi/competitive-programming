import java.util.Scanner;

/**
 * Created by Ayushi on 01/04/2018.
 */
public class p1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();

        if (n % 2 == 0) {
            System.out.println(0);
        }
        else {
            System.out.println(1);
        }
    }
}
