import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 30 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1466A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            ArrayList<Integer> arr = new ArrayList<>();
            int n = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }

            int b;
            for (int i = 0; i < n-1; i++) {
                for (int k = i+1; k < n; k++) {
                    /*b = Math.max(Math.abs(a[i]),
                            Math.max(Math.abs(a[k]),
                                    Math.abs(a[i]-a[k])));*/

                    b = a[k] - a[i];

                    if (!(arr.contains(b))) arr.add(b);
                }
            }
            System.out.println(arr.size());
        }
        br.close();
    }
}
