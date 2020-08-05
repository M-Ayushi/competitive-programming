import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 05 Aug 2020.
 * Problem:
 * Round:
 */

public class CF_1363A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            //int[] a = new int[n];
            int a;
            //int j = 0;
            int o, e;
            o = e = 0;
            while (st.hasMoreTokens()) {
                a = Integer.parseInt(st.nextToken());
                if (a % 2 == 0) e++;
                else o++;
                //j++;
            }

            //System.out.println("(o >= 1) = " + (o >= 1));
            //System.out.println("(k <= e) = " + (k <= e));
            //System.out.println("((k - e) % 2 == 0) = " + ((k - e) % 2 == 0));

            /*if ((o >= 1) && ((k <= e) || ((k - e) % 2 == 0))) {
                System.out.println("Yes");
            }*/
            /*if (o % 2 == 1) System.out.println("Yes");
            else System.out.println("No");*/

            boolean ans = false;
            for (int i = 1; i <= Math.min(o, k); i+= 2) {
                if (i + e >= k) {
                    //System.out.println("i = " + i);
                    //System.out.println("e = " + e);
                    //System.out.println("k = " + k);
                    //System.out.println("((i+e) >= k) = " + ((i + e) >= k));
                    ans = true;
                    break;
                }
            }
            System.out.println(ans ? "Yes":"No");
        }
        br.close();
    }
}
