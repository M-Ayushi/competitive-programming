import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 05 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1471B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            long x = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            long a;
            long[] b = new long[n+1];
            b[0] = 0;
            int min, c;
            min = 1000000000;
            c = 0;
            int j = 1;
            int i;
            while (st.hasMoreTokens()) {
                a = Integer.parseInt(st.nextToken());
                b[j] = b[j-1]+a;
                for (i = 0; a % x == 0; i++) a = a/x;
                //System.out.println("i = " + i);
                if (i < min) {
                    min = i;
                    c = j;
                }
                j++;
            }
            long ans = (min+1)*(b[n]) + b[c-1];
            //System.out.println(Arrays.toString(b));
            //System.out.println("min*(b[n]) = " + min*(b[n]));
            //System.out.println("b[c] = " + b[c]);
            System.out.println(ans);
        }
        br.close();
    }
}
