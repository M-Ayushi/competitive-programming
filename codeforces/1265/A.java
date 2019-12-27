import java.io.*;
import java.util.StringTokenizer;

/**
 * Created by Ayushi on 27/12/2019.
 */

public class CF_1265A_BeautifulString {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        String a = r.readLine();
        int t = Integer.parseInt(a);
        String ans;

        for (int i = 0; i < t; i++) {
            a = r.readLine();
            if (a.contains("aa") || a.contains("bb") || a.contains("cc")) {
                ans = "-1";
            }
            else {
                //st = new StringTokenizer(a, "");
                char[] b = a.toCharArray();
                for (int j = 0; j < a.length(); j++) {
                    if (b[j] == '?') {
                        if (b[Math.max(j-1, 0)] != 'a' && b[Math.min(j+1, a.length()-1)] != 'a') b[j] = 'a';
                        else if (b[Math.max(j-1, 0)] != 'b' && b[Math.min(j+1, a.length()-1)] != 'b') b[j] = 'b';
                        else b[j] = 'c';
                    }
                }
                ans = new String(b);
            }
            System.out.println(ans);
        }
        r.close();
    }
}
