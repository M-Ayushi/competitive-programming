import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 19 Sep 2020.
 * Problem:
 * Round:
 */

public class D {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine(), " ");
        br.close();
        int[] a = new int[n];
        int j = 0;
        while (st.hasMoreTokens()) {
            a[j] = Integer.parseInt(st.nextToken());
            j++;
        }

        Arrays.sort(a);

        System.out.println((n-1)/2);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) System.out.print(a[(n-1)-(i/2)] + " ");
            else System.out.print(a[i/2] + " ");
        }
        System.out.println();


    }
}
