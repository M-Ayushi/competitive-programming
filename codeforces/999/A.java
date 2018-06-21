import java.util.Scanner;

/**
 * Created by Ayushi on Thu, 21 Jun 2018.
 */
public class A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int sk = scan.nextInt();
        int[] p = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = scan.nextInt();
        }
        scan.close();
        boolean start = true;
        boolean end = false;
        int ans = 0;
        for (int j = 0; j < n; j++) {
            if (sk >= p[j]) {
                ans++;
            }
            else {
                break;
            }
        }
        for (int j = 1; j <= n; j++) {
            if (sk >= p[n-j]) {
                ans++;
            }
            else {
                break;
            }
        }
        if (ans > n) {
            ans = n;
        }
        System.out.println(ans);
    }
}
