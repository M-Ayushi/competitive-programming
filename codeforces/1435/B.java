import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 25 Oct 2020.
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
            int m = Integer.parseInt(st.nextToken());
            int[][] a = new int [n][m];
            for (int i = 0; i < n; i++) {
                st = new StringTokenizer(br.readLine(), " ");
                for (int j = 0; j < m; j++) {
                    a[i][j] = Integer.parseInt(st.nextToken());
                }
            }

            int x;
            int[] b = new int[n];
            //main:
            for (int i = 0; i < m; i++) {
                st = new StringTokenizer(br.readLine(), " ");
                x = Integer.parseInt(st.nextToken());
                for (int j = 0; j < n; j++) {
                    if (a[j][0] == x) {
                        b[0] = x;
                        for (int k = 1; k < n; k++) {
                            b[k] = Integer.parseInt(st.nextToken());
                        }
                        //break main;
                    }
                }
            }

            //out:
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (b[i] == a[j][0]) {
                        for (int k = 0; k < m; k++) {
                            System.out.print(a[j][k] + " ");
                        }
                        System.out.println();
                        //break out;
                    }
                }
            }
            /*st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }*/
        }
        br.close();
    }
}
