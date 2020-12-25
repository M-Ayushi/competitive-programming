import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 25 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1468E {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[4];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }
            Arrays.sort(a);
            int ans = a[0]*a[2];
            System.out.println(ans);
        }
        br.close();
    }
}
