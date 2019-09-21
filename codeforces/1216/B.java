import java.io.*;
import java.util.Arrays;

/**
 * Created by Ayushi on 21/09/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];
        temp = r.readLine().split(" ");
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(temp[i]);
            b[i] = a[i];
        }
        r.close();

        Arrays.sort(b);
        long ans = n;
        int x = 0;
        for (int j = n-1; j >= 0; j--, x++) {
            ans += b[j] * x;
            //System.out.println(b[j]);
            for (int k = 0; k < n; k++) {
                if (a[k] == b[j]) {
                    a[k] = 0;
                    c[x] = k+1;
                    break;
                }
            }
        }

        System.out.println(ans);
        for (int l = 0; l < n; l++) {
            System.out.print(c[l] + " ");
        }
    }
}
