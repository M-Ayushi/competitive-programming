import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 28 Sep 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            //int a, b, c, d;
            int a, b, c;
            boolean ans = false;
            for (int i = 0; i < n; i++) {
                st = new StringTokenizer(br.readLine(), " ");
                a = Integer.parseInt(st.nextToken());
                b = Integer.parseInt(st.nextToken());
                st = new StringTokenizer(br.readLine(), " ");
                c = Integer.parseInt(st.nextToken());
                //d = Integer.parseInt(st.nextToken());

                if (b == c) ans = true;
            }

            if (m % 2 == 1) ans = false;
            System.out.println(ans ? "YES":"NO");
        }
        br.close();
    }
}
