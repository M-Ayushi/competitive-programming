import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 10 Oct 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            int tot = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                tot += a[j];
                j++;
            }

            Arrays.sort(a);
            if (tot < 0) {
                System.out.println("YES");
                for (int i = 0; i < n; i++) {
                    System.out.print(a[i] + " ");
                }
                System.out.println();
            }
            else if (tot > 0) {
                System.out.println("YES");
                for (int i = n-1; i >= 0; i--) {
                    System.out.print(a[i] + " ");
                }
                System.out.println();
            }
            else {
                System.out.println("NO");
            }
        }
        br.close();
    }
}
