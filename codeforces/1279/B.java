import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 27/12/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String temp = r.readLine();
        int t = Integer.parseInt(temp);
        for (int i = 0; i < t; i++) {
            temp = r.readLine();
            st = new StringTokenizer(temp, " ");
            int n = Integer.parseInt(st.nextToken());
            int s = Integer.parseInt(st.nextToken());
            temp = r.readLine();
            st = new StringTokenizer(temp, " ");
            int[] a = new int[n];
            int j = 0;
            int ft = s;
            int nft = 0;
            int max = 0;
            int mn = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                if (ft > 0) {
                    ft -= a[j];
                    if (ft >= 0) nft++;

                    if (a[j] > max) {
                        max = a[j];
                        mn = j;
                    }
                }
                j++;
            }

            a[mn] = 0;

            ft = s;
            int nft2 = -1;
            for (int k = 0; k < n && ft > 0; k++) {
                ft -= a[k];
                if (ft >= 0) nft2++;
            }

            if (nft2 > nft) {
                System.out.println(mn+1);
            }
            else {
                System.out.println(0);
            }
        }
        r.close();
    }
}
