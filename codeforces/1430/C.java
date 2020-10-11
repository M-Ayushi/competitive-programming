import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 11 Oct 2020.
 * Problem:
 * Round:
 */

public class C {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());

            /*System.out.println(((n+1)/2));
            if (n % 2 == 0) {
                for (int i = 2; i <= n/2; i++) {
                    System.out.println(i + " " + ((n-i)+2));
                }
                for (int j = 1; j < n/2; j++) {
                    System.out.println(((n+2)/2) + " " + ((n+2)/2));
                }
                System.out.println(1 + " " + ((n+2)/2));
            }
            else {
                for (int i = 1; i <= n/2; i++) {
                    System.out.println(i + " " + ((n-i)+1));
                }
                for (int j = 0; j < n/2; j++) System.out.println(((n+1)/2) + " " + ((n+1)/2));
            }*/

            if (n == 1) System.out.println(1);
            else {
                System.out.println(2);
                if (n > 2) {
                    System.out.println(n + " " + (n - 2));
                    System.out.println((n - 1) + " " + (n - 1));
                }
                else {
                    System.out.println("1 2");
                }
                for (int i = n-1; i > 2; i--) {
                    System.out.println(i + " " + (i-2));
                    //System.out.println((i-1) + " " + (i-1));
                }
            }
        }
        br.close();
    }
}
