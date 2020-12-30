import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 30 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1466B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n+1];
            a[0] = 0;
            int j = 1;
            int ans = 0;
            //boolean inc = false;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                if (a[j] > a[j-1]) {
                    ans++;
                }
                else if (a[j] == a[j-1]) {
                    a[j]++;
                    ans++;
                }
                else {
                    a[j]++;
                }
                j++;
            }

            System.out.println(ans);
        }
        br.close();
    }
}
