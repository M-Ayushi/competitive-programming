import java.io.*;

/**
 * Created by Ayushi on 27/11/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);

        for (int i = 0; i < n; i++) {
            temp = r.readLine().split(" ");
            Long a = Long.parseLong(temp[0]);
            Long b = Long.parseLong(temp[1]);

            if (((a+b) % 3 == 0) && ((Math.max(a, b)) <= (Math.min(a, b) * 2))) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }

        r.close();
    }
}
