import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 28 Sep 2020.
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
            int x = Integer.parseInt(st.nextToken());

            int ans;
            if (n < 3) ans = 1;
            else ans = ((n-2)/x)+((((n-2)%x) > 0) ? 2:1);

            System.out.println(ans);
        }
        br.close();
    }
}
