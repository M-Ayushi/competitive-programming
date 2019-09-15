import java.io.*;

/**
 * Created by Ayushi on 15/09/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int a = Integer.parseInt(temp[0]);
        temp = r.readLine().split(" ");
        int b = Integer.parseInt(temp[0]);
        temp = r.readLine().split(" ");
        int x = Integer.parseInt(temp[0]);
        temp = r.readLine().split(" ");
        int y = Integer.parseInt(temp[0]);
        temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        r.close();

        int t;
        if (x < y) {
            t = y;
            y = x;
            x = t;

            t = a;
            a = b;
            b = t;
        }

        int m = n;
        m -= ((x-1)*a);
        m -= ((y-1)*b);
        /*for (int i = 0; i < a && m > 0; i++) {
            m -= x-1;
        }*/
        /*for (int j = 0; j < b && m > 0; j++) {
            m -= y-1;
        }*/
        int min = Math.max(m, 0);

        int max = 0;
        m = n;
        for (int k = 0; k < b && m > 0; k++) {
            m -= y;
            if (m >= 0) max++;
        }
        for (int l = 0; l < a && m > 0; l++) {
            m -= x;
            if (m >= 0) max++;
        }

        System.out.println(min + " " + max);
    }
}
