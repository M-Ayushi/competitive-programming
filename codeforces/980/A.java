import java.util.Scanner;

/**
 * Created by Ayushi on 08/05/2018.
 */
public class p1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String original = scan.next();
        scan.close();
        int ori_length = original.length();
        String[] necklace = original.split("");
        int p = 0;
        int l = 0;
        for (int i = 0; i < ori_length; i++) {
            if (necklace[i].equals("o")) {
                p++;
            }
            else {
                l++;
            }
        }
        if (p == 0 || l == 0) {
            System.out.println("YES");
        }
        else if (l % p == 0) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}