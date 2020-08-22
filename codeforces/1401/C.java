import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 22 Aug 2020.
 * Problem:
 * Round:
 */

public class CF_1401C {
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
            int m = 1000000001;
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                b[j] = a[j];
                m = Math.min(m, b[j]);
                j++;
            }
            Arrays.sort(b);

            boolean ans = true;
            for (int i = 0; i < n; i++) {
                if (a[i] % m > 0 && a[i] != b[i]) {
                    ans = false;
                    break;
                }
            }

            System.out.println(ans ? "YES":"NO");
        }
        br.close();
    }
}
