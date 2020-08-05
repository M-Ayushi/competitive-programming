import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 05 Aug 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            //long mc ,tc, mo, to;
            int mc, mo;
            mc = mo = 1000000000;
            //tc = to = 0;
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                mc = Math.min(mc, a[j]);
                //tc += a[j];
                j++;
            }
            st = new StringTokenizer(br.readLine(), " ");
            int[] b = new int[n];
            j = 0;
            while (st.hasMoreTokens()) {
                b[j] = Integer.parseInt(st.nextToken());
                mo = Math.min(mo, b[j]);
                //to += b[j];
                j++;
            }

            //long ans = (tc -(mc * n)) + (to -(mo * n));
            //System.out.println(ans);
            long ans = 0;
            for (int i = 0; i < n; i++) {
                ans += Math.max(a[i]-mc, b[i]-mo);
            }
            System.out.println(ans);
        }
        br.close();
    }
}
