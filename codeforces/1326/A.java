import java.io.*;
//import java.util.*;

/**
 * Created by Ayushi on 19 Mar 2020.
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
            int m = n;
            if (n == 1) System.out.println(-1);
            else {
                while (m-- > 1) System.out.print(5);
                System.out.println(4);
            }
            //st = new StringTokenizer(temp, " ");
            //int[] a = new int[n];
            //int j = 0;
            /*while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
            }*/
        }
        br.close();
    }
}
