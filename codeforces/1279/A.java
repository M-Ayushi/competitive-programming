import java.io.*;
import java.util.StringTokenizer;

/**
 * Created by Ayushi on 27/12/2019.
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
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());

            if (a <= (b+c+1) && b <= (a+c+1) && c <= (b+a+1)) System.out.println("Yes");
            else System.out.println("No");
        }
        r.close();
    }
}
