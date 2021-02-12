import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 12 Feb 2021.
 * Problem:
 * Round:
 */

public class CF_1485A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            int ex = 0;
            if (b == 1) {
                b++;
                ex = 1;
            }

            int min = 2000000000;
            int ans, c, d, j;
            for (int i = 0; i < a; i++) {
                //System.out.println("i = " + i);
                c = b+i;
                //if (c == 1) continue;
                d = a;
                ans = i;
                for (j = 0; d != 0; j++) {
                    //System.out.println("d = " + d);
                    //System.out.println("c = " + c);
                    d = d/c;
                }
                ans += j;

                if (min < ans) break;
                else min = ans;

                //min = Math.min(min, ans);
            }
            System.out.println(min+ex);
        }
        br.close();
    }
}
