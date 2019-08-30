import java.io.*;

/**
 * Created by Ayushi on 30/08/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        temp = r.readLine().split(" ");
        long[] a = new long[n];
        long e, o;
        e = o = 0;
        for (int i = 0; i < n; i++) {
            a[i] = Long.parseLong(temp[i]);
            if (a[i] % 2 == 0) e++;
            else o++;
        }
        r.close();
        System.out.println(Math.min(e, o));
    }
}
