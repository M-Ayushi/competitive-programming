import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 04 Feb 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        while(t-- > 0) {
            temp = br.readLine();
            int n = Integer.parseInt(temp);
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int[] a = new int[n];
            int j = 0;
            int o = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                if (a[j] % 2 == 1) o++;
                j++;
            }

            if ((o == n && n % 2 == 1) || (o < n && o > 0)) System.out.println("YES");
            else System.out.println("NO");
        }
        br.close();
    }
}
