import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 21 Aug 2020.
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
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            int z = Integer.parseInt(st.nextToken());

            int n = Math.min(c, y);
            long ans = n*2;
            c -= n;
            y -= n;

            n = Math.min(c, z);
            c -= n;
            z -= n;

            n = Math.min(c, x);
            c -= n;
            x -= n;


            n = Math.min(b, y);
            b -= n;
            y -= n;

            n = Math.min(b, x);
            b -= n;
            x -= n;

            n = Math.min(b, z);
            ans -= 2*n;
            b -= n;
            z -= n;

            System.out.println(ans);
        }
        br.close();
    }
}
