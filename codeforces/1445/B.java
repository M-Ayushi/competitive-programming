import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 01 Nov 2020.
 * Problem:
 * Round:
 */

public class CF_1445B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());

            int ans = Math.max((a+b), (c+d));
            System.out.println(ans);
        }
        br.close();
    }
}
