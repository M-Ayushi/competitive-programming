import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 19 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1459B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        st = new StringTokenizer(br.readLine(), " ");
        long n = Integer.parseInt(st.nextToken());
        br.close();

        long ans;
        if (n % 2 == 0) {
            ans = ((n/2)+1) * ((n/2)+1);
        }
        else {
            long x = 0;
            for (long i = 1; i <= ((n+1)/2); i++) {
                x += i;
            }
            ans = 4*x;
        }
        System.out.println(ans);
    }
}
