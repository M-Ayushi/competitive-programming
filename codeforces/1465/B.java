import java.io.*;

/**
 * Created by Ayushi on 20 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1465B {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            long n = Long.parseLong(br.readLine());

            long i;
            for (i = n; true; i++){
                if (isFair(i)) {
                    System.out.println(i);
                    break;
                }
            }
        }
        br.close();
    }
    public static boolean isFair(long m) {
        long x = m;
        while (x >= 10) {
            //System.out.println(x);
            if (x % 10 > 0 && m % (x%10) > 0) return false;
            x = x/10;
        }
        return x <= 0 || m % x <= 0;
    }
}
