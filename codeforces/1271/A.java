import java.io.*;

/**
 * Created by Ayushi on 15/12/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String temp = r.readLine();
        int t = Integer.parseInt(temp);
        temp = r.readLine();
        int s = Integer.parseInt(temp);
        temp = r.readLine();
        int v = Integer.parseInt(temp);
        temp = r.readLine();
        int j = Integer.parseInt(temp);
        temp = r.readLine();
        int a = Integer.parseInt(temp);
        temp = r.readLine();
        int b = Integer.parseInt(temp);
        r.close();

        int ans = 0;
        int x;
        if (a > b) {
            x = Math.min(t, j);
            j -= x;
            ans += (x*a);

            x = Math.min(s, Math.min(v, j));
            ans += (x*b);
        }
        else {
            x = Math.min(s, Math.min(v, j));
            j -= x;
            ans += (x*b);

            x = Math.min(t, j);
            ans += (x*a);
        }

        System.out.println(ans);
    }
}
