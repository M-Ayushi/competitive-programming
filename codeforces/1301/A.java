import java.io.*;

/**
 * Created by Ayushi on 13 Feb 2020.
 * Problem:
 * Round:
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        while(t-- > 0) {
            String a = br.readLine();
            String b = br.readLine();
            String c = br.readLine();
            int ans = 0;

            for (int i = 0; i < a.length(); i++) {
                if (a.charAt(i) == c.charAt(i) || b.charAt(i) == c.charAt(i)) ans++;
            }

            System.out.println((ans == a.length()) ? "YES":"NO");
        }
        br.close();
    }
}
