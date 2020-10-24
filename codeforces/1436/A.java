import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 24 Oct 2020.
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
            int m = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            //long[] a = new long[n];
            //int j = 0;
            long a;
            long tot = 0;
            while (st.hasMoreTokens()) {
                a = Integer.parseInt(st.nextToken());
                tot += a;
            }

            System.out.println((tot == m) ? "YES":"NO");


        }
        br.close();
    }
}
