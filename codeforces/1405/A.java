import sun.util.locale.StringTokenIterator;

import java.io.*;
import java.util.StringTokenizer;

/**
 * Created by Ayushi on 06 Sep 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            int[] a = new int[n];
            st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(st.nextToken());
            }
            for (int j = n-1; j >= 0; j--) {
                System.out.print(a[j] + " ");
            }
            System.out.println();
            //StringBuilder sb = new StringBuilder(br.readLine());

            //if (sb.lastIndexOf(" ") == sb.length()) sb.deleteCharAt(sb.length()-1);

            //System.out.println(sb.reverse());
        }
        br.close();
    }
}
