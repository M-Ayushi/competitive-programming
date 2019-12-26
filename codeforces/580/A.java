import java.io.*;
import java.util.StringTokenizer;

/**
 * Created by Ayushi on 26/12/2019.
 */

public class CF_580A_KefaAndFirstSteps {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String temp = r.readLine();
        int n = Integer.parseInt(temp);
        int[] a = new int[n+1];
        temp = r.readLine();
        r.close();
        StringTokenizer st = new StringTokenizer(temp, " ");
        int i = 1;
        a[0] = 0;
        int c, ans;
        c = ans = 0;
        while (st.hasMoreTokens()) {
            a[i] = Integer.parseInt(st.nextToken());
            //System.out.println("a[i] = " + a[i]);
            //System.out.println("a[i-1] = " + a[i-1]);
            //System.out.println("(a[i] < a[i-1]) = " + (a[i] < a[i-1]));
            if (a[i] < a[i-1]) {
                ans = Math.max(ans, c);
                c = 1;
            }
            else {
                c++;
                //System.out.println(a[i]);
            }
            i++;
        }
        System.out.println(Math.max(c, ans));
    }
}
