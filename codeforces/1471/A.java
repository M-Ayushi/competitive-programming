import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 05 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1471A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            long x = Integer.parseInt(st.nextToken());
            long tot = 0;
            long max = 0;
            st = new StringTokenizer(br.readLine(), " ");
            long a;
            while (st.hasMoreTokens()) {
                a = Integer.parseInt(st.nextToken());
                tot += a;
                max += (a/x) + ((a%x > 0)?1:0);
            }
            long min = tot/x + ((tot%x > 0)?1:0);
            System.out.println(min + " " + max);
        }
        br.close();
    }
}
