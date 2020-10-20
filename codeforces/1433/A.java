import java.io.*;

/**
 * Created by Ayushi on 20 Oct 2020.
 * Problem:
 * Round:
 */

public class CF_1433A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            String n = br.readLine();

            int ans = 0;
            String[] s = {"1", "11", "111", "1111",
                    "2", "22", "222", "2222",
                    "3", "33", "333", "3333",
                    "4", "44", "444", "4444",
                    "5", "55", "555", "5555",
                    "6", "66", "666", "6666",
                    "7", "77", "777", "7777",
                    "8", "88", "888", "8888",
                    "9", "99", "999", "9999"};
            for (int i = 0; i < 36; i++) {
                ans += s[i].length();
                if (n.equals(s[i])) break;
            }
            System.out.println(ans);
        }
        br.close();
    }
}
