import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 09 Sep 2020.
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
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            int c = Math.abs(a-b);
            int ans = c / 10;
            ans += (c%10 != 0 ? 1:0);

            System.out.println(ans);
        }
        br.close();
    }
}
