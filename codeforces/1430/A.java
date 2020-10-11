import java.io.*;

/**
 * Created by Ayushi on 11 Oct 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());

            String ans = "-1";
            main:
            for (int i = 0; i <= n/7; i++) {
                for (int j = 0; j <= n/5; j++) {
                    //System.out.println("i = " + i);
                    //System.out.println("j = " + j);
                    //System.out.println(n - ((7*i) + (5*j)));
                    if ((n - ((7*i) + (5*j))) % 3 == 0) {
                        ans = ((n - ((7*i) + (5*j))) / 3) + " " + j + " " + i;
                        break main;
                    }
                }
            }
            System.out.println(ans);
        }
        br.close();
    }
}
