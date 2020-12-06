import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 06 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1450A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            String a = br.readLine();
            String[] b = a.split("");
            Arrays.sort(b);
            for (int i = 0; i < n; i++) {
                System.out.print(b[i]);
            }
            System.out.println();
        }
        br.close();
    }
}
