import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 20 Oct 2020.
 * Problem:
 * Round:
 */

public class CF_1433B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int[] b = new int[n+1];
            int j = 0;
            int c = 0;
            int i = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                if (a[j] != (i%2)) {
                    b[i] = c;
                    c = 1;
                    i++;
                }
                else c++;
                j++;
            }
            b[i] = c;
            int ans = 0;
            for (int k = 2; k < i; k+=2) {
                ans += b[k];
            }
            System.out.println(ans);
            //System.out.println(Arrays.toString(b));
        }
        br.close();
    }
}
