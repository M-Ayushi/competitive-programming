import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 27 Oct 2020.
 * Problem:
 * Round:
 */

public class CF_1437A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int l = Integer.parseInt(st.nextToken());
            int r = Integer.parseInt(st.nextToken());

            if (l >= ((r+2)/2)) System.out.println("YES");
            else System.out.println("NO");
        }
        br.close();
    }
}
