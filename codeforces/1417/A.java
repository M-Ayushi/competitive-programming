import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 27 Sep 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }
            Arrays.sort(a);
            int ans = 0;
            int b;
            for (int i = 1; i < n; i++) {
                b = (k-a[i])/a[0];

                ans += b;
                if (b == 0) break;
            }
            System.out.println(ans);
        }
        br.close();
    }
}
