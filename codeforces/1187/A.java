import java.io.*;

/**
 * Created by Suneet on 30/06/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int q = Integer.parseInt(temp[0]);
        int n, s, t, b, ans;
        for (int i = 0; i < q; i++) {
            temp = r.readLine().split(" ");
            n = Integer.parseInt(temp[0]);
            s = Integer.parseInt(temp[1]);
            t = Integer.parseInt(temp[2]);
            b = Math.abs(n-(s+t));
            //System.out.println("b = " + b);

            if (s == n && t == n) ans = 1;
            else if (b > 0) ans = (Math.max(s, t)-b)+1;
            else {
                ans = Math.max(s, t)+1;
            }

            System.out.println(ans);
        }
        r.close();
    }
}
