import java.util.Scanner;

/**
 * Created by alok.mahajan on 26/03/2018.
 */
public class Translation_41A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String a = scan.nextLine();
        String b = scan.nextLine();
        scan.close();

        String revB = new StringBuilder(b).reverse().toString();

        if (a.equals(revB)) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
