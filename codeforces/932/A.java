import java.util.Scanner;

/**
 * Created by alok.mahajan on 26/03/2018.
 */
public class PalindromicSupersequence_932A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String a = scan.nextLine();
        scan.close();

        String b = new StringBuilder(a).reverse().toString();

        String c = a + b;
        if (a.equals(b)) {
            c = a;
        }

        System.out.println(c);
    }
}
