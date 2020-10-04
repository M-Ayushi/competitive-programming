import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 04 Oct 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            int[][] a = new int[n][m];

            int j;
            for (int i = 0; i < n; i++) {
                st = new StringTokenizer(br.readLine(), " ");
                j = 0;
                while (st.hasMoreTokens()) {
                    a[i][j] = Integer.parseInt(st.nextToken());
                    j++;
                }
            }

            long ans = 0;
            int x, y, v, w;
            long v1, v2, v3, v4;
            long p;
            //long c, p;
            //long min, max;
            long a1, a2, a3, a4;
            //a1 = a2 = a3 = a4 = 0;
            for (x = 0; x < n/2; x++) {
                for (y = 0; y < m/2; y++) {
                    v = (n - x)-1;
                    w = (m - y)-1;

                    v1 = a[x][y];
                    v2 = a[x][w];
                    v3 = a[v][y];
                    v4 = a[v][w];

                    a1 = Math.abs(v1 - v2) + Math.abs(v1 - v3) + Math.abs(v1 - v4);
                    a2 = Math.abs(v2 - v1) + Math.abs(v2 - v3) + Math.abs(v2 - v4);
                    a3 = Math.abs(v3 - v1) + Math.abs(v3 - v2) + Math.abs(v3 - v4);
                    a4 = Math.abs(v4 - v1) + Math.abs(v4 - v2) + Math.abs(v4 - v3);
                    p = Math.min(Math.min(a1, a2), Math.min(a3, a4));

                    /*c = p = (long) Math.pow(10, 9) * 4;
                    min = Math.min(Math.min(v1, v2), Math.min(v3, v4));
                    max = Math.max(Math.max(v1, v2), Math.max(v3, v4));
                    for (long k = min; k <= max; k++) {
                        p = c;
                        c = Math.abs(k - v1) + Math.abs(k - v2) + Math.abs(k - v3) + Math.abs(k - v4);
                        if (c >= p) break;
                    }*/
                    ans += p;
                }
            }

            if (n % 2 == 1) {
                for (y = 0; y < m/2; y++) {
                    x = ((n/2));
                    w = (m - y)-1;
                    v1 = a[x][y];
                    v2 = a[x][w];
                    ans += Math.abs(v2 - v1);
                }
            }
            if (m % 2 == 1) {
                for (x = 0; x < n/2; x++) {
                    y = ((m/2));
                    v = (n - x)-1;
                    v1 = a[x][y];
                    v2 = a[v][y];
                    ans += Math.abs(v2 - v1);
                }
            }
            System.out.println(ans);
        }
        br.close();
    }
}
