import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 04 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1472A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int w = Integer.parseInt(st.nextToken());
            int h = Integer.parseInt(st.nextToken());
            int n = Integer.parseInt(st.nextToken());

            int c = 1;
            while (c < n) {
                if (w % 2 == 0) {
                    w = w/2;
                    c = c*2;
                }
                else if (h % 2 == 0) {
                    h = h/2;
                    c = c*2;
                }
                else break;
            }
            System.out.println((c >= n) ? "YES":"NO");
        }
        br.close();
    }
}
