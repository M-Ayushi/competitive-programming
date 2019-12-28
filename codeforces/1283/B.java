import java.io.*;
import java.util.StringTokenizer;

/**
 * Created by Ayushi on 28/12/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String temp = r.readLine();
        int t = Integer.parseInt(temp);
        for (int i = 0; i < t; i++) {
            temp = r.readLine();
            st = new StringTokenizer(temp, " ");
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());

            int ans = ((n/k)*k) + Math.min(n%k, k/2);
            System.out.println(ans);
        }
        r.close();
    }
}
