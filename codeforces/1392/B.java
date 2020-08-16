import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 16 Aug 2020.
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
            long k = Long.parseLong(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            int min, max;
            min = 1000000001;
            max = -1000000001;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                min = Math.min(min, a[j]);
                max = Math.max(max, a[j]);
                j++;
            }

            int x;
            if (k % 2 == 0) x = min;
            else x = max;
            for (int i = 0; i < n; i++) {
                System.out.print(Math.abs(x-a[i]) + " ");
            }
            System.out.println();
        }
        br.close();
    }
}
