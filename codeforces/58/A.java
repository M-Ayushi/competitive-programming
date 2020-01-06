import java.io.*;

/**
 * Created by Ayushi on 06 Jan 2020.
 * Problem: Chat Room
 * Round: Div. 2 (Beat Round)
 */

public class CF_58A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String a = br.readLine();
        br.close();

        boolean ans = true;
        int b, l;
        do {
            b = a.indexOf("h");
            if (b == -1) {
                ans = false;
                break;
            }
            l = b+1;

            b = a.indexOf("e", l);
            if (b == -1) {
                ans = false;
                break;
            }
            l = b+1;

            b = a.indexOf("l", l);
            if (b == -1) {
                ans = false;
                break;
            }
            l = b+1;

            b = a.indexOf("l", l);
            if (b == -1) {
                ans = false;
                break;
            }
            l = b+1;

            b = a.indexOf("o", l);
            if (b == -1) {
                ans = false;
                break;
            }
        } while (false);

        System.out.println(ans ? "YES":"NO");
    }
}
