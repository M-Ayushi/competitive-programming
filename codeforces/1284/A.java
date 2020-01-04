import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 04 Jan 2020.
 * Problem: New Year and Naming
 * Round:
 */

public class CF_1284A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        st = new StringTokenizer(temp, " ");
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        temp = br.readLine();
        st = new StringTokenizer(temp, " ");
        String[] a = new String[n];
        int j = 0;
        while (st.hasMoreTokens()) {
            a[j] = st.nextToken();
            j++;
        }
        temp = br.readLine();
        st = new StringTokenizer(temp, " ");
        String[] b = new String[m];
        j = 0;
        while (st.hasMoreTokens()) {
            b[j] = st.nextToken();
            j++;
        }

        //System.out.println(Arrays.toString(a));
        //System.out.println(Arrays.toString(b));

        temp = br.readLine();
        int t = Integer.parseInt(temp);

        while (t-- > 0) {
            temp = br.readLine();
            int x = Integer.parseInt(temp);
            int y = x % n;
            int z = x % m;

            if (y == 0) y = n;
            if (z == 0) z = m;

            y--;
            z--;

            System.out.println(a[y] + b[z]);
        }

        br.close();
    }
}
