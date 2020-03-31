import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 31 Mar 2020.
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
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            int x1 = Integer.parseInt(st.nextToken());
            int y1 = Integer.parseInt(st.nextToken());
            int x2 = Integer.parseInt(st.nextToken());
            int y2 = Integer.parseInt(st.nextToken());

            boolean ans = true;
            if (a-b > x-x1) {
                ans = false;
                //System.out.println("Too left");
            }
            if (b-a > x2-x) {
                ans = false;
                //System.out.println("Too right");
            }
            if (c-d > y-y1) {
                ans = false;
                //System.out.println("Too up");
            }
            if (d-c > y2-y) {
                ans = false;
                //System.out.println("Too down");
            }
            if (x == x1 && x == x2 && (a+b) > 0) ans = false;
            if (y == y1 && y == y2 && (c+d) > 0) ans = false;

            System.out.println(ans?"Yes":"No");
        }
        br.close();
    }
}
