import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 17 Oct 2020.
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
            long x1 = Integer.parseInt(st.nextToken());
            long y1 = Integer.parseInt(st.nextToken());
            long x2 = Integer.parseInt(st.nextToken());
            long y2 = Integer.parseInt(st.nextToken());

            long ans;
            if (x1 == x2) {
                ans = Math.abs(y2 - y1);
            }
            else if (y1 == y2) {
                ans = Math.abs(x2 - x1);
            }
            else {
                ans = Math.abs(x2 - x1) + Math.abs(y2 - y1) + 2;
            }
            System.out.println(ans);
        }
        br.close();
    }
}
