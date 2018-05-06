import java.util.Scanner;

/**
 * Created by Ayushi on 06/05/2018.
 */
public class p1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long n = scan.nextLong();
        long k = scan.nextLong();
        scan.close();

        for (int i = 0; i < k; i++) {
            if (n % 10 == 0) {
                n = n/10;
            }
            else {
                n = n - 1;
            }
        }

        System.out.println(n);
    }
}