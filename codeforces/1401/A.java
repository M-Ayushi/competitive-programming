import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 21 Aug 2020.
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
            int k = Integer.parseInt(st.nextToken());

            int ans;
            if (k > n) ans = k - n;
            else {
                if (k % 2 != n % 2) ans = 1;
                else ans = 0;
            }
            System.out.println(ans);
        }
        br.close();
    }
}
