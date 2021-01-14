import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 14 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1473A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int x = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }
            Arrays.sort(a);
            if ((a[0] + a[1]) <= x) {
                System.out.println("YES");
            }
            else if (a[n-1] <= x) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
        br.close();
    }
}
