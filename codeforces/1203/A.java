import java.io.*;

/**
 * Created by Ayushi on 13/08/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int q = Integer.parseInt(temp[0]);
        for (int i = 0; i < q; i++) {
            temp = r.readLine().split(" ");
            int n = Integer.parseInt(temp[0]);
            int[] a = new int[n];
            temp = r.readLine().split(" ");
            int x, y;
            x = y = 0;
            for (int j = 0; j < n; j++) {
                a[j] = Integer.parseInt(temp[j]);
                if (a[j] == n) x = j;
                if (a[j] == 1) y = j;
            }
            boolean cw, acw;
            cw = acw = true;
            for (int l = y; l < n-1 && cw; l++) {
                if (a[l] > a[l+1]) cw = false;
                //System.out.println("cw! = " + cw);
            }
            if (y != 0 && a[n-1] > a[0]) cw = false;
            //System.out.println("cw = " + cw);
            for (int l1 = 0; l1 < y-1 && cw; l1++) {
                if (a[l1] > a[l1+1]) cw = false;
                //System.out.println("cw = " + cw);
            }

            for (int k = x; k < n-1 && acw; k++) {
                if (a[k] < a[k+1]) acw = false;
            }
            if (x != 0 && a[n-1] < a[0]) acw = false;
            for (int k1 = 0; k1 < x-1 && acw; k1++) {
                if (a[k1] < a[k1+1]) acw = false;
            }

            //System.out.println("cw = " + cw);
            //System.out.println("acw = " + acw);
            System.out.println((cw || acw) ? "YES" : "NO");
        }
        r.close();
    }
}
