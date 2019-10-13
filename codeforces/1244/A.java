import java.io.*;

/**
 * Created by Ayushi on 13/10/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int t = Integer.parseInt(temp[0]);
        for (int i = 0; i < t; i++) {
            temp = r.readLine().split(" ");
            int a = Integer.parseInt(temp[0]);
            int b = Integer.parseInt(temp[1]);
            int c = Integer.parseInt(temp[2]);
            int d = Integer.parseInt(temp[3]);
            int k = Integer.parseInt(temp[4]);

            int x = a/c;
            if (a % c != 0) x++;

            int y = b/d;
            if (b % d != 0) y++;

            if ((x+y) > k) {
                System.out.println(-1);
            }
            else {
                System.out.println(x + " " + y);
            }
        }
        r.close();
    }
}
