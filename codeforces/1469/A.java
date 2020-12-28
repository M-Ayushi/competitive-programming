import java.io.*;

/**
 * Created by Ayushi on 28 Dec 2020.
 * Problem:
 * Round:
 */

public class CF_1469A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            String s = br.readLine();

            String ans  = "YES";
            int o, c;
            o = c = -1;
            int n = s.length();

            for (int i = 0; i < n; i++) {
                if (s.charAt(i) == '(') o = i;
                if (s.charAt(i) == ')') c = i;
            }

            if (o == n-1 || c == 0) ans = "NO";
            if (n % 2 == 1) ans = "NO";


            /*int o, c, q;
            o = c = q = 0;

            for (char i : s.toCharArray()) {
                if (i == '(') o++;
                else if (i == ')') c++;
                else q++;

                if (c > o) {
                    if (q > 0) {
                        q--;
                        o++;
                    }
                    else {
                        ans = "NO";
                        break;
                    }
                }
            }
            if (c == o) {
                if (q % 2 == 1) ans = "NO";
            }
            else {
                if (c+q < o) ans = "NO";
                if (c+o % 2 != q % 2) ans = "NO";
            }*/

            System.out.println(ans);
        }
        br.close();
    }
}
