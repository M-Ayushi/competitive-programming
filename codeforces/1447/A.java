import java.io.*;

/**
 * Created by Ayushi on 15 Nov 2020.
 * Problem:
 * Round:
 */

public class CF_1447A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());

            System.out.println(n-1);
            for (int i = 2; i <= n; i++) System.out.print(i + " ");
            System.out.println();
        }
        br.close();
    }
}
