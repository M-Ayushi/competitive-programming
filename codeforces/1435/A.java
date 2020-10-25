import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 25 Oct 2020.
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
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }

            int x, y;
            for (int i = 0; i < n; i+=2) {
                x = a[i];
                y = a[i+1];
                System.out.print(y + " " + (x*(-1)) + " ");
            }
            System.out.println();
        }
        br.close();
    }
}
