import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 12 Sep 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine(), " ");
            long[] a = new long[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }
            Arrays.sort(a);

            long x = a[0] * a[1] * a[2] * a[3] * a[n-1];
            long y = a[0] * a[1] * a[n-3] * a[n-2] * a[n-1];
            long z = a[n-5] * a[n-4] * a[n-3] * a[n-2] * a[n-1];

            System.out.println(Math.max(x, Math.max(y, z)));
        }
        br.close();
    }
}
