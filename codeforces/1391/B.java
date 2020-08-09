import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 09 Aug 2020.
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

            //int[] a = new int[n];
            //int j = 0;
            /*while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }*/
            int ans = 0;
            String a;
            for (int i = 0; i < n-1; i++) {
                //st = new StringTokenizer(br.readLine(), " ");
                a = br.readLine();
                if (a.charAt(m-1) != 'D') ans++;
                /*for (int j = 0; j < m; j++) {
                    a = st.nextToken();
                    if (j == m-1 && !(a.equals("D"))) {
                        ans++;
                    }
                    if (i == n-1 && !(a.equals("R"))) {
                        ans++;
                    }
                }*/
            }
            a = br.readLine();
            for (int j = 0; j < m-1; j++) {
                if (a.charAt(j) != 'R') {
                    ans++;
                }
            }

            System.out.println(ans);
        }
        br.close();
    }
}
