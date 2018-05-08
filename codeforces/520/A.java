import java.util.Scanner;

/**
 * Created by Ayushi on 08/05/2018.
 */
public class CF_520A_Pangram {
    public static void main(String[] args) {
        String[] alpha = "abcdefghijklmnopqrstuvwxyz".split("");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String ori = scan.next();
        scan.close();
        if (n < 26) {
            System.out.println("NO");
        }
        else {
            String down = ori.toLowerCase();
            int letters = 0;
            for (int i = 0; i < 26; i++) {
                if (down.contains(alpha[i])) {
                    letters++;
                } else {
                    break;
                }
            }
            if (letters == 26) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
