import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 01/10/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        long q = Long.parseLong(temp[0]);
        StringTokenizer st;
        for (long i = 0; i < q; i++) {
            temp = r.readLine().split(" ");
            long n = Long.parseLong(temp[0]);
            //Long[] a = new Long[n];
            long tot = 0;
            long a;

            st = new StringTokenizer(r.readLine());
            //temp = r.readLine().split(" ");
            while (st.hasMoreTokens()) {
                a = Long.parseLong(st.nextToken());
                tot += a;
            }
            long ans = tot/n;
            if (tot % n != 0) ans++;
            System.out.println(ans);
        }
        r.close();
    }
}
