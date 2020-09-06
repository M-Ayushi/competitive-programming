import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 06 Sep 2020.
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
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            long x, z, ans;
            x = ans = 0;
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());

                if (a[j] > 0) {
                    //x += Math.min(0, a[j]-y);
                    x += a[j];
                }
                else {
                    a[j] = Math.abs(a[j]);
                    z = Math.min(x, a[j]);
                    a[j] -= z;
                    x -= z;

                    ans += a[j];
                }
                j++;
            }

            System.out.println(ans);
        }
        br.close();
    }
}
