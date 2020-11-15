import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 15 Nov 2020.
 * Problem:
 * Round:
 */

public class CF_1447B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            //int m = Integer.parseInt(st.nextToken());
            int a, b, z, tot;
            b = z = tot = 0;
            int min = 101;
            for (int i = 0; i < n; i++) {
                st = new StringTokenizer(br.readLine(), " ");
                //int[] a = new int[n];
                while (st.hasMoreTokens()) {
                    a = Integer.parseInt(st.nextToken());
                    if (a == 0) z++;
                    if (a < 0) b++;
                    min = Math.min(min, Math.abs(a));
                    tot += Math.abs(a);
                }
            }

            if (b % 2 == 1){
                if (z == 0) {
                    tot -= (min*2);
                }
            }
            System.out.println(tot);
        }
        br.close();
    }
}
