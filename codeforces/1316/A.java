import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 04 Mar 2020.
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
            int m = Integer.parseInt(st.nextToken());

            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int[] a = new int[n];
            int j = 0;
            int tot = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                tot += a[j];
                j++;
            }
            
            System.out.println(Math.min(tot, m));
        }
        br.close();
    }
}
