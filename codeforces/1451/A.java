import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 21 Nov 2020.
 * Problem:
 * Round:
 */

public class CF_1451A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());

            /*int i;
            main:
            for (i = 0; n > 1; i++) {
                for (int j = 2; j <= Math.sqrt(n); j++) {
                    if (n % j == 0) {
                        n = j;
                        continue main;
                    }
                }
                n--;
            }

            System.out.println(i);*/

            int ans;
            /*if (n == 1) ans = 0;
            else if (n == 2) ans = 1;
            else if (n % 2 == 0) ans = 2;
            else ans = 3;*/

            if (n <= 3) ans = (n-1);
            else ans = 2+(n%2);

            System.out.println(ans);
        }
        br.close();
    }
}
