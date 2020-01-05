import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 05 Jan 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        //StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        while (t-- > 0) {
            temp = br.readLine();
            int n = Integer.parseInt(temp);
            temp = br.readLine();
            //st = new StringTokenizer(temp, "");
            char[] a = temp.toCharArray();
            /*String[] a = new String[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = st.nextToken();
                j++;
            }*/
            //System.out.println(Arrays.toString(a));

            int change;
            int i;
            for (i = 0; i < 100; i++) {
                change = 0;
                for (int k = n-1; k > 0; k--) {
                    if (a[k] == 'P' && a[k-1] == 'A') {
                        a[k] = 'A';
                        change++;
                    }
                }
                if (change == 0) break;
            }
            System.out.println(i);
        }
        br.close();
    }
}
