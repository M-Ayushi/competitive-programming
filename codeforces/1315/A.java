import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 23 Feb 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        while (t-- > 0) {
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());

            /*int a = x*y;
            int b = (n-x)*y;
            int c = (n-x)*(m-y);
            int d = x*(m-y);
            System.out.println("a = " + a);
            System.out.println("b = " + b);
            System.out.println("c = " + c);
            System.out.println("d = " + d);*/

            int a = n*y;
            int b = m*x;
            int c = ((n-x)-1) * m;
            int d = ((m-y)-1) * n;

            //int ans = Math.max(x, (n-x)) * Math.max(y, (n-y));
            //System.out.println(ans);

            System.out.println(Math.max(Math.max(a, b), Math.max(c, d)));
        }
        br.close();
    }
}
