import java.io.*;

/**
 * Created by Ayushi on 25 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1475A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            long n = Long.parseLong(br.readLine());

            String ans = "NO";
            /*for (long i = 3; i <= n; i+=2) {
                if (n % i == 0) {
                    ans = "YES";
                    break;
                }
            }*/
            while (n % 2 == 0) {
                n = n/2;
            }
            if (n >= 3) ans = "YES";
            System.out.println(ans);
        }
        br.close();
    }
}
