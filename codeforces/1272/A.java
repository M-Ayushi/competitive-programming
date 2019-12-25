import java.io.*;

/**
 * Created by Ayushi on 25/12/2019.
 */

public class CF_1272A_ThreeFriends {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int t = Integer.parseInt(temp[0]);
        for (int i = 0; i < t; i++) {
            temp = r.readLine().split(" ");
            long a = Long.parseLong(temp[0]);
            long b = Long.parseLong(temp[1]);
            long c = Long.parseLong(temp[2]);

            long ans = Math.abs(a-b) + Math.abs(a-c) + Math.abs(c-b);
            ans -= 4;
            System.out.println(Math.max(ans, 0));
        }
        r.close();
    }
}
