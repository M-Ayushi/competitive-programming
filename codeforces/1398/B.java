import java.io.*;

/**
 * Created by Ayushi on 14 Aug 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            String a = br.readLine();
            int n = a.length();
            StringBuilder sb = new StringBuilder(a);
            StringBuilder c = new StringBuilder();

            for (int i = 0; i < n; i++) c.append("1");

            int s, g;
            s = g = 0;
            //for (int j = 0; j < n; j++)
            while (c.length() > 0) {
                //System.out.println("sb = " + sb);
                //System.out.println("c = " + c);
                if (sb.indexOf(c.toString()) != -1) {
                    if (g % 2 == 0) s += c.length();
                    g++;

                    sb.replace(sb.indexOf(c.toString()), sb.indexOf(c.toString())+c.length(), "");
                }
                else {
                    c.replace(0, 1, "");
                }
            }

            System.out.println(s);
        }
        br.close();
    }
}
