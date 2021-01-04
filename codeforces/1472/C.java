import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 04 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1472C {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int[] b = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                b[j] = -1;
                j++;
            }

            //int k, ans;
            int ans = 0;
            for (int i = n-1; i >= 0; i--) {
                b[i] = a[i] + (i+a[i] < n ? b[i+a[i]]:0);
                ans = Math.max(ans, b[i]);
            }
            //System.out.println(Arrays.toString(b));
            System.out.println(ans);
        }
        br.close();
    }
}
