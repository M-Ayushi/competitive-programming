import java.util.Scanner;

/**
 * Created by Ayushi on Mon, 19 Nov 2018.
 */
public class CF_791_BearAndBigBrother {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        scan.close();

        for (int i = 0; i < 100; i++) {
            if (a > b) {
                System.out.println(i);
                break;
            }
            a = a*3;
            b = b*2;
        }
    }
}
