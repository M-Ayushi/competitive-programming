import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 06 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1450B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());
            int[] x = new int[n];
            int[] y = new int[n];
            for (int i = 0; i < n; i++) {
                st = new StringTokenizer(br.readLine(), " ");
                x[i] = Integer.parseInt(st.nextToken());
                y[i] = Integer.parseInt(st.nextToken());
            }

            int ans = -1;
            main:
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (Math.abs(x[i]-x[j]) + Math.abs(y[i]-y[j]) > k) continue main;
                }
                ans = 1;
                break;
            }

            System.out.println(ans);
        }
        br.close();
    }
}
