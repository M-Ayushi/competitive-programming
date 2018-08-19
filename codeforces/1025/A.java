import java.util.Scanner;

/**
 * Created by Ayushi on Sun, 19 Aug 2018.
 */
public class A {
    public static void main(String[] args) {
        String[] alpha = "abcdefghijklmnopqrstuvwxyz".split("");
        int[] beta = new int[26];
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String a = scan.next();
        scan.close();
        String[] b = a.split("");
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                if (b[i].equals(alpha[j])) {
                    beta[j]++;
                    if (beta[j] == 1) {
                        ans++;
                    }
                }
            }
        }
        if (ans == n && n > 1) {
            System.out.println("No");
        }
        else {
            System.out.println("Yes");
        }
    }
}
