import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 17 Feb 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        while (t-- > 0) {
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int n = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }

            int px = 1;
            while (d > 0 && px <= d && px < n) {
                if (a[px] > 0) {
                    d -= px;
                    a[px]--;
                    a[0]++;
                }
                else px++;
            }
            System.out.println(a[0]);
        }
        br.close();
    }
}
