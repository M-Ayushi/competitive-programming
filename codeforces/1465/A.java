import java.io.*;

/**
 * Created by Ayushi on 20 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1465A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            /*st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }*/

            String s = br.readLine();

            String ans = "No";
            int i;
            for (i = n-1; i >= 0; i--) {
                if (s.charAt(i) != ')') {
                    break;
                }
            }
            //System.out.println("i = " + i);
            if ((i+1) < n-(i+1)) ans = "Yes";
            System.out.println(ans);
        }
        br.close();
    }
}
