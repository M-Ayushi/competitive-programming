import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 12 Feb 2021.
 * Problem:
 * Round:
 */

public class CF_1485B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        st = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(st.nextToken());
        int q = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine(), " ");
        int[] a = new int[n+2];
        a[0] = 0;
        a[n+1] = k+1;
        int j = 1;
        while (st.hasMoreTokens()) {
            a[j] = Integer.parseInt(st.nextToken());
            j++;
        }

        int[] b = new int[n+1];
        int c;
        b[0] = 0;
        for (int i = 1; i <= n; i++) {
            c = (a[i+1]-a[i-1])-2;
            b[i] = b[i-1] + c;
        }

        //a[0] = a[n+1] = -1;

        //System.out.println(Arrays.toString(b));
        while (q-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int l = Integer.parseInt(st.nextToken());
            int r = Integer.parseInt(st.nextToken());

            int ans = (b[r]-b[l-1]) + a[l-1] + ((k-a[r+1])+1);
            //System.out.println("(b[r]-b[l-1]) = " + (b[r]-b[l-1]));
            //System.out.println("a[l-1] = " + a[l-1]);
            //System.out.println("((k-a[r+1])+1) = " + ((k-a[r+1])+1));
            //System.out.println("(k-a[r]) = " + (k-a[r]));
            System.out.println(ans);
        }
        br.close();
    }
}
