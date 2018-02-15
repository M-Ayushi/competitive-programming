import java.util.Scanner;

/**
 * Created by Ayushi on 2/15/2018.
 */
public class elephant617A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int d = scan.nextInt();
        if (d % 5 == 0) {
            System.out.println(d / 5);
        }
        else {
            System.out.println((d / 5) + 1);
        }
    }
}
