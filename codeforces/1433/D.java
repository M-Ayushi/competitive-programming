import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 20 Oct 2020.
 * Problem:
 * Round:
 */

public class CF_1433D {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            ArrayList<Integer> arr = new ArrayList<>();
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int o = -1;
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                if (!(arr.contains(a[j]))) {
                    arr.add(a[j]);
                    o = j;
                }
                j++;
            }

            if (arr.size() > 1) {
                System.out.println("YES");
                for (int i = 1; i < n; i++) {
                    if (a[i] != a[0]) {
                        System.out.println("1 " + (i+1));
                    }
                    else {
                        System.out.println((o+1) + " " + (i+1));
                    }
                }
            }
            else System.out.println("NO");
        }
        br.close();
    }
}
