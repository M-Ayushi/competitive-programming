import java.io.*;

/**
 * Created by Ayushi on 07 Feb 2021.
 * Problem:
 * Round:
 */

public class CF_1480A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            String a = br.readLine();
            for (int i = 0; i < a.length(); i++) {
                if (i % 2 == 0) {
                    System.out.print(a.charAt(i) == 'a' ? "b":"a");
                }
                else {
                    System.out.print(a.charAt(i) == 'z' ? "y":"z");
                }
            }
            System.out.println();
        }
        br.close();
    }
}
