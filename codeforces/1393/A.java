import java.io.*;

/**
 * Created by Ayushi on 07 Aug 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            System.out.println((n/2)+1);

        }
        br.close();
    }
}
