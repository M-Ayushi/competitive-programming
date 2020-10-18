import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 18 Oct 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            long a = Integer.parseInt(st.nextToken());
            long b = Integer.parseInt(st.nextToken());

            System.out.println(a^b);
            //System.out.println("(a^b) = " + (a^b));
            //System.out.println("(a^1) = " + (a^1));
        }
        br.close();
    }
}
