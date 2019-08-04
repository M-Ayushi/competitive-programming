import java.io.*;
import java.util.Arrays;

/**
 * Created by Ayushi on 04/08/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        int[] a = new int[n];
        temp = r.readLine().split(" ");
        long tot = 0;
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(temp[i]);
            tot += a[i];
        }
        r.close();
        Arrays.sort(a);
        if ((tot-a[n-1]) >= a[n-1] && tot % 2 == 0) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
