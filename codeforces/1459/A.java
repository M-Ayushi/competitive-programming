import java.io.*;

/**
 * Created by Ayushi on 19 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1459A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            String s = br.readLine();
            int[] a = new int[n];
            for (int i = 0; i < n; i++){
                a[i] = s.charAt(i);
            }
            s = br.readLine();
            int[] b = new int[n];
            for (int i = 0; i < n; i++){
                b[i] = s.charAt(i);
            }

            int aw, bw;
            aw = bw = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] > b[i]) aw++;
                if (a[i] < b[i]) bw++;
            }

            if (aw > bw) System.out.println("RED");
            else if (aw < bw) System.out.println("BLUE");
            else System.out.println("EQUAL");
        }
        br.close();
    }
}
