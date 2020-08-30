import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 30 Aug 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine(), " ");
        int[] a = new int[n];
        int j = 0;
        while (st.hasMoreTokens()) {
            a[j] = Integer.parseInt(st.nextToken());
            j++;
        }
        Arrays.sort(a);
        long c = (long) Math.pow(1000000000, 1000000000)-1;
        long p = (long) Math.pow(1000000000, 1000000000);
        int x = 1;
        while (c < p) {
            p = c;
            c = 0;

            for (int i = 1; i < n; i++) {
                //System.out.println("Math.pow(x ,i) = " + Math.pow(x, i));
                //System.out.println("c = " + c);
                c += Math.abs(Math.pow(x, i) - a[i]);
                //System.out.println("c = " + c);
            }

            x++;
        }

        //System.out.println(x);
        System.out.println(p + (a[0]-1));

        br.close();
    }
}
