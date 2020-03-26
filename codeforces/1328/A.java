import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 26 Mar 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        st = new StringTokenizer(temp, " ");
        int t = Integer.parseInt(st.nextToken());

        while (t-- > 0) {
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            int ans;
            if (a % b == 0) ans = 0;
            else ans = b-(a%b);
            System.out.println(ans);
        }
        br.close();
    }
}
