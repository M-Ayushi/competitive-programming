import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 23 Feb 2020.
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
            //int[] a = new int[3];
            //int j = 0;
            //while (st.hasMoreTokens()) {
                //a[j] = Integer.parseInt(st.nextToken());
                //j++;
            //}
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());

            int x = a;
            a = Math.max(a, c);
            c = Math.min(x, c);
            x = a;
            a = Math.max(a, b);
            b = Math.min(x, b);
            x = b;
            b = Math.max(b, c);
            c = Math.min(x, c);

            int ans = 0;
            if (a > 0) {
                a--;
                ans++;
            }
            if (b > 0) {
                b--;
                ans++;
            }
            if (c > 0){
                c--;
                ans++;
            }
            if (a > 0 && b > 0) {
                a--;
                b--;
                ans++;
            }
            if (a > 0 && c > 0) {
                a--;
                c--;
                ans++;
            }
            if (b > 0 && c > 0) {
                b--;
                c--;
                ans++;
            }
            if (a > 0 && b > 0 && c > 0) ans++;

            System.out.println(ans);
        }
        br.close();
    }
}
