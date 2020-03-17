import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 13 Mar 2020.
 * Problem:
 * Round:
 */

public class CF_1324A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        while (t-- > 0) {
            temp = br.readLine();
            int n = Integer.parseInt(temp);
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int ans = 0;
            int x;
            while (st.hasMoreTokens()) {
                x = Integer.parseInt(st.nextToken());
                ans += x % 2;
            }
            System.out.println((ans == 0 || ans == n)? "YES":"NO");
        }
        br.close();
    }
}
