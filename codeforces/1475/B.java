import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 25 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1475B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());

            String ans = "NO";
            if (n % 2020 <= n/2020) ans = "YES";
            System.out.println(ans);
        }
        br.close();
    }
}
