import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 26 Mar 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        st = new StringTokenizer(temp, " ");
        int t = Integer.parseInt(st.nextToken());

        while (t-- > 0) {
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());

            //int m = (n*(n-1))/2;
            int x = 0;
            int b1 = 0;
            int b2 = 0;
            for (int i = 1; i < n; i++) {
                x += i;
                //System.out.println(x);
                if (k <= x) {
                    b1 = (n-i)-1;
                    b2 = (n-(k-(x-i)));
                    //System.out.println("broken");
                    break;
                }
            }

            //System.out.println(b1 + " " + b2);
            StringBuilder ans = new StringBuilder();
            for (int o = 0; o < n; o++) {
                if (o == b1 || o == b2) ans.append("b");
                else ans.append("a");
            }
            System.out.println(ans);
        }
        br.close();
    }
}
