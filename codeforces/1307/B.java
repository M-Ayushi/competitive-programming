import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 17 Feb 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        while (t-- > 0) {
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int n = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            //int[] a = new int[n];
            ArrayList<Integer> a = new ArrayList<>(n);
            //int j = 0;
            while (st.hasMoreTokens()) {
                a.add(Integer.parseInt(st.nextToken()));
                //j++;
            }

            //Arrays.sort(a);
            int ans;
            int m = Collections.max(a);
            if (d < m) {
                if (a.contains(d)) ans = 1;
                else ans = 2;
            }
            else {
                ans = d / m;
                ans += ((d % m != 0) ? 1 : 0);
            }
            System.out.println(ans);
        }
        br.close();
    }
}
