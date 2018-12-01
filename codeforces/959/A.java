import java.util.Scanner;

/**
 * Created by Ayushi on Sat, 01 Dec 2018.
 */
public class CF_959A_MahmoudAndEhabAndTheEvenOddGame {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        if (n % 2 == 0) {
            System.out.println("Mahmoud");
        }
        else {
            System.out.println("Ehab");
        }
    }
}
