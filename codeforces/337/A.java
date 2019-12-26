import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

/**
 * Created by Ayushi on 26/12/2019.
 */

public class CF_337A_Puzzles {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String temp = r.readLine();
        StringTokenizer st = new StringTokenizer(temp, " ");
        int n = Integer.parseInt(st.nextToken());
        n--;
        int m = Integer.parseInt(st.nextToken());

        int[] a = new int[m];
        temp = r.readLine();
        st = new StringTokenizer(temp, " ");
        int i = 0;
        while (st.hasMoreTokens()) {
            a[i] = Integer.parseInt(st.nextToken());
            i++;
        }
        r.close();

        Arrays.sort(a);
        int ans = a[m-1] - a[0];
        for (int j = 0; j < m-n; j++) {
            ans = Math.min(ans, (a[j+n]-a[j]));
        }
        System.out.println(ans);
    }
}
