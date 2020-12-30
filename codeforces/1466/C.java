import java.io.*;

/**
 * Created by Ayushi on 30 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1466C {
    public static void main(String[] args) throws IOException {
        char[] alpha = "abcde".toCharArray();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            String s = br.readLine();
            StringBuilder a = new StringBuilder(s);

            char w, x, y, z;
            int ans = 0;
            for (int i = 1; i < a.length(); i++) {
                w = (i > 1) ? a.charAt(i-2):'?';
                x = a.charAt(i-1);
                y = (i < a.length()-1) ? a.charAt(i+1):'?';
                z = (i < a.length()-2) ? a.charAt(i+2):'?';
                if (a.charAt(i) == x || a.charAt(i) == w) {
                    for (int j = 0; j < 5; j++) {
                        if (alpha[j] != w &&
                                alpha[j] != x &&
                                alpha[j] != y &&
                                alpha[j] != z) {
                            a.replace(i, i+1, String.valueOf(alpha[j]));
                            break;
                        }
                    }
                    ans++;
                }
                //System.out.println(a.toString());
            }

            System.out.println(ans);
        }
        br.close();
    }
}
