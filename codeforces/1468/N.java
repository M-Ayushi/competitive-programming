import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 25 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1468N {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int[] c = new int[3];
            int[] a = new int[5];
            st = new StringTokenizer(br.readLine(), " ");
            c[0] = Integer.parseInt(st.nextToken());
            c[1] = Integer.parseInt(st.nextToken());
            c[2] = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            a[0] = Integer.parseInt(st.nextToken());
            a[1] = Integer.parseInt(st.nextToken());
            a[2] = Integer.parseInt(st.nextToken());
            a[3] = Integer.parseInt(st.nextToken());
            a[4] = Integer.parseInt(st.nextToken());

            System.out.println(solve(c, a) ? "YES":"NO");
        }
        br.close();
    }
    public static boolean solve(int[] c, int[] a) {
        int x;
        for (int i = 0; i < 3; i++)  {
            if (c[i] < a[i]) return false;
            else c[i] = c[i]-a[i];
        }

        for (int i = 0; i < 2; i++) {
            if (c[i]+c[2] < a[i+3]) return false;
            else {
                x = Math.min(a[i+3], c[i]);
                a[i+3] = a[i+3]-x;
                c[i] = c[i]-x;

                x = Math.min(a[i+3], c[2]);
                c[2] = c[2]-x;
            }
        }

        return true;
    }
}
