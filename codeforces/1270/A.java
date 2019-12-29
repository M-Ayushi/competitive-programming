import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 29/12/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String temp = r.readLine();
        int t = Integer.parseInt(temp);
        for (int i = 0; i < t; i++) {
            temp = r.readLine();
            st = new StringTokenizer(temp, " ");
            int n = Integer.parseInt(st.nextToken());
            int k1 = Integer.parseInt(st.nextToken());
            int k2 = Integer.parseInt(st.nextToken());
            
            int[] a = new int[n];
            int[] b = new int[n];

            String ans = "NO";

            temp = r.readLine();
            st = new StringTokenizer(temp, " ");
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());

                if (a[j] == n) ans = "YES";

                j++;
            }

            temp = r.readLine();
            st = new StringTokenizer(temp, " ");
            j = 0;
            while (st.hasMoreTokens()) {
                b[j] = Integer.parseInt(st.nextToken());
                j++;
            }

            System.out.println(ans);

            //System.out.println("a[1] = " + a[1]);

            /*int p1 = k1;
            int p2 = k2;
            
            while (p1 < n && p2 < n) {
                Arrays.sort(a);
                Arrays.sort(b);
                System.out.println(Arrays.toString(a));
                System.out.println(Arrays.toString(b));
                if (a[n-1] > b[n-1]) {
                    a[0] = b[n-1];
                    p1++;
                    b[n-1] = 0;
                    p2--;
                }
                else {

                }
            }*/
        }
        r.close();
    }
}
