import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 05 Aug 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }
            Arrays.sort(a);

            boolean ans = true;
            for (int i = 0; i < n-1; i++) {
                /*if (a[i-1] < a[i]-1 || a[i] < a[i+1]-1) {
                    ans = false;
                    break;
                }*/
                if (a[i]+1 < a[i+1]) {
                    ans = false;
                    break;
                }
            }
            System.out.println(ans ? "YES":"NO");
        }
        br.close();
    }
}
