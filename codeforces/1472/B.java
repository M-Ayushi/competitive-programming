import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 04 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1472B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine(), " ");
            int a;
            int x, y;
            x = y = 0;
            while (st.hasMoreTokens()) {
                a = Integer.parseInt(st.nextToken());
                if (a == 1) x++;
                else y++;
            }

            if (y % 2 == 0) {
                System.out.println((x % 2 == 0) ? "YES":"NO");
            }
            else {
                System.out.println((x % 2 == 0 && x > 0) ? "YES":"NO");
            }
        }
        br.close();
    }
}
