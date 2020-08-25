import java.io.*;

/**
 * Created by Ayushi on 25 Aug 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            String a = br.readLine();

            StringBuilder x = new StringBuilder();
            StringBuilder y = new StringBuilder();
            for (int i = 0; i < n; i++) {
                x.append(0);
                y.append(1);
            }

            String z = x.toString();
            String o = y.toString();

            if (a.contains(z)) System.out.println(z);
            else System.out.println(o);
        }
        br.close();
    }
}
