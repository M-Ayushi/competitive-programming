import java.io.*;

/**
 * Created by Ayushi on 20/10/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        long t = Integer.parseInt(temp[0]);
        for(long i = 0; i < t; i++) {
            long ep, op, eq, oq;
            ep = eq = 0;
            temp = r.readLine().split(" ");
            int n = Integer.parseInt(temp[0]);
            long[] p = new long[n];
            temp = r.readLine().split(" ");
            for (int j = 0; j < n; j++) {
                p[j] = Long.parseLong(temp[j]);
                if (p[j] % 2 == 0) ep++;
            }
            op = n-ep;

            temp = r.readLine().split(" ");
            int m = Integer.parseInt(temp[0]);
            long[] q = new long[m];
            temp = r.readLine().split(" ");
            for (int k = 0; k < m; k++) {
                q[k] = Long.parseLong(temp[k]);
                if (q[k] % 2 == 0) eq++;
            }
            oq = m-eq;

            long e_ans, o_ans;

            e_ans = ep*eq;
            o_ans = op*oq;
            /*if (Math.min(ep, eq) == 0) e_ans = 0;
            else e_ans = (Math.max(ep, eq));

            if (Math.min(op, oq) == 0) o_ans = 0;
            else o_ans = (Math.max(op, oq));*/

            System.out.println(e_ans + o_ans);
        }
        r.close();
    }
}
