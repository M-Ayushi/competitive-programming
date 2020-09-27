import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 27 Sep 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }
            if (k % 2 == 1) {
                for (int i = 0; i < n; i++) {
                    System.out.print((a[i]%2) + " ");
                }
            }
            else {
                int m = k / 2;
                int z = 0;
                for (int i = 0; i < n; i++) {
                    if (a[i] < m) System.out.print("0 ");
                    else if (a[i] > m) System.out.print("1 ");
                    else {
                        System.out.print((z%2) + " ");
                        z++;
                    }
                }
            }
            System.out.println();
        }
        br.close();
    }
}
