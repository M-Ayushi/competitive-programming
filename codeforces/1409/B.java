import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 09 Sep 2020.
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
            long a = Long.parseLong(st.nextToken());
            long b = Long.parseLong(st.nextToken());
            long x = Long.parseLong(st.nextToken());
            long y = Long.parseLong(st.nextToken());
            long n = Long.parseLong(st.nextToken());

            /*int z, ans1, ans2;
            if (a < b) {
                z = Math.max(a-n, x);
                n -= a-z;
                a = z;

                z = Math.max(b-n, y);
                //n -= a-z;
                b = z;
                ans1 = a*b;
            }
            else {
                z = Math.max(b-n, y);
                n -= b-z;
                b = z;

                z = Math.max(a-n, x);
                //n -= a-z;
                a = z;
            }*/

            long ans1 = solve(a, b, x, y, n);
            long ans2 = solve(b, a, y, x, n);

            System.out.println(Math.min(ans1, ans2));
        }
        br.close();
    }
    public static long solve(long a, long b, long c, long d, long n) {
        long z;
        z = Math.max(a-n, c);
        n -= a-z;
        a = z;

        z = Math.max(b-n, d);
        //n -= a-z;
        b = z;

        return (a*b);
    }
}
