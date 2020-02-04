import java.io.*;

/**
 * Created by Ayushi on 04 Feb 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        while(t-- > 0) {
            temp = br.readLine();
            long n = Long.parseLong(temp);
            long s = 0;
            long x;
            while (n > 9) {
                x = n/10;
                n -= x*10;
                n += x;
                s += x*10;
            }
            System.out.println(s+n);
        }
        br.close();
    }
}
