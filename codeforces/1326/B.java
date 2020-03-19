import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 19 Mar 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int n = Integer.parseInt(temp);

        temp = br.readLine();
        st = new StringTokenizer(temp, " ");
        int[] a = new int[n];
        int j = 0;
        while (st.hasMoreTokens()) {
            a[j] = Integer.parseInt(st.nextToken());
            j++;
        }
        br.close();
        int m = 0;
        for (int i = 0; i < n; i++) {
            System.out.print((a[i] + m) + " ");
            m = Math.max(m , a[i]+m);
        }
    }
}
