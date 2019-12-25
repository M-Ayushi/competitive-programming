import java.io.*;

/**
 * Created by Ayushi on 25/12/2019.
 */

public class CF_1223A_CME {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        for (int i = 0; i < n; i++) {
            temp = r.readLine().split(" ");
            int a = Integer.parseInt(temp[0]);

            if (a == 2) System.out.println(2);
            else if (a % 2 == 0) System.out.println(0);
            else System.out.println(1);
        }
        r.close();
    }
}
