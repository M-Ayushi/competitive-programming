import java.io.*;

/**
 * Created by Ayushi on 24/12/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        for (int i = 0; i < n; i++) {
            temp = r.readLine().split(" ");
            int x = Integer.parseInt(temp[0]);
            int y = Integer.parseInt(temp[1]);
            int c = Integer.parseInt(temp[2]);
            int d = Integer.parseInt(temp[3]);

            int a = Math.min(x, y);
            int b = Math.max(x, y);

            //int ans = Math.abs(a-b);
            int ans = 0;
            ans += Math.max(((c-d)-a), 0);
            ans += Math.max((b-(c+d)), 0);

            /*for (int j = a; j < b; j++) {
                if (j >= (c-d) && j < (c+d)) {
                    //System.out.println(j + " has coverage");
                    ans--;
                }
            }

            2
-10 20 -17 2
-3 1 2 0
            */

             /*if (c < a) {

             }
             else if (c > b) {

             }
             else {

             }*/

            System.out.println(Math.min(ans, b-a));
        }
        r.close();
    }
}
