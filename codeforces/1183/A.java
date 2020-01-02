import java.io.*;
//import java.util.*;

/**
 * Created by Ayushi on 02 Jan 2020.
 */

public class CF_1183A_NearestInterestingNumber {
    public static void main(String[] args) throws IOException {
        //StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int n = Integer.parseInt(temp);
        br.close();

        while(true) {
            int a = n;
            //String m = String.valueOf(n);
            //st = new StringTokenizer(m, "");
            int tot = 0;
            while (a > 0) {
                tot += a%10;

                a -= a%10;
                a = a/10;
            }
            if (tot % 4 == 0) break;
            else n++;
        }
        System.out.println(n);
    }
}
