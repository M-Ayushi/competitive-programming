import java.util.*;

/*
    User: Ayushi
    Time: 21:02
    Date: 03 Mar 2019
    Website: Codeforces
    Problem: CF_268A_Games
*/

public class CF_268A_Games {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] h = new int[n];
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            h[i] = scan.nextInt();
            a[i] = scan.nextInt();
        }
        scan.close();

        int ans = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (j != k && h[j] == a[k]) {
                    ans++;
                }
            }
        }
        System.out.println(ans);
    }
}
