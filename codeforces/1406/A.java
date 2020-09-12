import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 12 Sep 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            //st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[101];
            int j;
            //boolean z = false;
            //boolean o = false;
            while (st.hasMoreTokens()) {
                j = Integer.parseInt(st.nextToken());
                a[j]++;
                //a[j] = Integer.parseInt(st.nextToken());
                /*if (a[j] == 0) {
                    z = true;
                    break;
                }*/
            }
            //System.out.println(Arrays.toString(a));
            int x, y;
            x = y = -1;
            int i;
            for (i = 0; i < 101; i++) {
                /*if (a[i] < 1) {
                    x = y = i;
                    break;
                }
                if (a[i] < 2) {
                    x = i;
                    break;
                }*/
                if (a[i] == 0) {
                    x = i;
                    break;
                }
            }
            for (int k = 0; k < 101; k++) {
                if (a[k] < 2) {
                    y = k;
                    break;
                }
            }
            System.out.println(x+y);
        }
        br.close();
    }
}
