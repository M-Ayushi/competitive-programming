import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 29/12/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);
        for (int i = 0; i < t; i++) {
            temp = br.readLine();
            int n = Integer.parseInt(temp);
            int[] a = new int[n];
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }

            String ans = "NO";

            for (int x = 0; x < n-1; x++) {
                if (Math.abs(a[x] - a[x+1]) >= 2) {
                    ans = "YES \n" + (x+1) + " " + (x+2);
                    break;
                }
            }

            /*int[] b;

            for (int l = 0; l < n-1; l++) {
                for (int r = l+2; r <= n; r++) {
                    b = Arrays.copyOfRange(a, l, r);
                    Arrays.sort(b);

                    if (b[b.length - 1] - b[0] >= b.length) {
                        ans = "YES \n" +(l + 1) + " " + (r);
                        break;
                    }
                }
            }*/

            System.out.println(ans);
        }
        br.close();
    }
}
