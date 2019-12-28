import java.io.*;
import java.util.StringTokenizer;

/**
 * Created by Ayushi on 28/12/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String temp = r.readLine();
        int n = Integer.parseInt(temp);
        for (int i = 0; i < n; i++) {
            temp = r.readLine();
            st = new StringTokenizer(temp, " ");
            int h = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());

            int ans = 60 - m;
            ans += (23 - h) * 60;

            System.out.println(ans);
        }
        r.close();
    }
}
