import java.io.*;

/**
 * Created by Ayushi on 17 Oct 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            String s = br.readLine();
            char x, y;
            int r, l, o;
            r = l = o = 0;
            int a, b;
            a = b = 0;
            for (int i = 0; i < n; i++) {
                x = s.charAt(i);
                y = s.charAt((i+1)%n);

                if (x == '>') r++;
                else if (x == '<') l++;
                else o++;

                if (x == '-' || y == '-') a++;
                else if (x == y) b++;
            }
            int ans = a;
            if (n == (r+o) || n == (l+o)) {
                ans += b;
            }
            System.out.println(ans);
        }
        br.close();
    }
}
