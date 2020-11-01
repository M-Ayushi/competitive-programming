import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 01 Nov 2020.
 * Problem:
 * Round:
 */

public class CF_1445A {
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
            st = new StringTokenizer(br.readLine(), " ");
            int[] b = new int[n];
            j = 0;
            while (st.hasMoreTokens()) {
                b[j] = Integer.parseInt(st.nextToken());
                j++;
            }
            String ans = "Yes";
            for(int i = 0; i < n; i++) {
                if (a[i]+b[(n-1)-i] > x) {
                    ans = "No";
                    break;
                }
            }
            System.out.println(ans);

            if (t > 0) st = new StringTokenizer(br.readLine(), " ");
        }
        br.close();
    }
}
