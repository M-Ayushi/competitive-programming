import java.io.*;
import java.util.Arrays;

/**
 * Created by Ayushi on 20/10/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        int[] a = new int[n];
        temp = r.readLine().split(" ");
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(temp[i]);
        }
        r.close();
        Arrays.sort(a);
        int m = n/2;
        int o = n-1;
        //int h = n-m;
        long x, y;
        x = y = 0;

        for (int j = 0; j < m; j++) {
            x += a[o-j];
            y += a[j];
        }

        //System.out.println("x = " + x);
        //System.out.println("y = " + y);
        if (n % 2 == 1) {
            x += a[m];
        }
        //System.out.println("m = " + m);

        //System.out.println("x = " + x);
        //System.out.println("y = " + y);

        long ans = (x*x) + (y*y);
        //System.out.println("ans = " + ans);
        System.out.println(ans);
    }
}
