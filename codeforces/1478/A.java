import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 28 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1478A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n+1];
            a[0] = 0;
            int j = 1;
            int max, c;
            max = c = 1;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                if (a[j] == a[j-1]) c++;
                else {
                    max = Math.max(max, c);
                    c = 1;
                }
                j++;
            }
            max = Math.max(max, c);

            System.out.println(max);
        }
        br.close();
    }
}
