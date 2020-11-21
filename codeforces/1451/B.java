import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 21 Nov 2020.
 * Problem:
 * Round:
 */

public class CF_1451B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int q = Integer.parseInt(st.nextToken());
            String a = br.readLine();
            /*st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }*/
            int s, e;
            boolean ans;
            while (q-- > 0) {
                st = new StringTokenizer(br.readLine(), " ");
                s = Integer.parseInt(st.nextToken()) - 1;
                e = Integer.parseInt(st.nextToken()) - 1;

                ans = false;
                for (int i = s-1; i >= 0; i--) {
                    if (a.charAt(i) == a.charAt(s)) {
                        ans = true;
                        break;
                    }
                }
                for (int i = e+1; i < n; i++) {
                    if (a.charAt(i) == a.charAt(e)) {
                        ans = true;
                        break;
                    }
                }

                System.out.println(ans ? "YES": "NO");
            }
        }
        br.close();
    }
}
