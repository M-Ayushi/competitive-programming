import java.io.*;

/**
 * Created by Ayushi on 22/08/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        int ans, x, y;
        for (int i = 0; i < n; i++) {
            temp = r.readLine().split(" ");
            int b = Integer.parseInt(temp[0])/2;
            int p = Integer.parseInt(temp[1]);
            int f = Integer.parseInt(temp[2]);
            temp = r.readLine().split(" ");
            int h = Integer.parseInt(temp[0]);
            int c = Integer.parseInt(temp[1]);
            x = y =  0;

            x += Math.min(b, p)*h;
            x += Math.min(Math.max(b-p, 0), f)*c;

            y += Math.min(b, f)*c;
            y += Math.min(Math.max(b-f, 0), p)*h;
            ans = Math.max(x, y);
            System.out.println(ans);
        }
        r.close();
    }
}
