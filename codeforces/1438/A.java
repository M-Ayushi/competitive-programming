import java.io.*;

/**
 * Created by Ayushi on 13 Nov 2020.
 * Problem:
 * Round:
 */

public class CF_1438A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            for (int i = 0; i < n; i++) System.out.print("1 ");
            System.out.println();
        }
        br.close();
    }
}
