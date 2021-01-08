import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 08 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1467A {
    public static void main(String[] args) throws IOException {
        //char[] x = "9876543210".toCharArray();
        //char[] y = "0123456789".toCharArray();
        char[] x = "7890123456".toCharArray();
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());

            StringBuilder sb = new StringBuilder("9");
            for (int i = 1; i < n; i++) sb.append(x[i%10]);
            /*int z;
            for (z = 0; z < n/2; z++) {
                sb.append(x[z%10]);
            }
            for (int i = z; i < n; i++) {
                sb.append(y[(i+z)%10]);
            }*/
            System.out.println(sb.toString());
        }
        br.close();
    }
}
