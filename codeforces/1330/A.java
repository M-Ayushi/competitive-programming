import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 06 Aug 2020.
 * Problem:
 * Round:
 */

public class CF_1330A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int x = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine(), " ");
            ArrayList<Integer> a = new ArrayList<>();
            while (st.hasMoreTokens()) {
                a.add(Integer.parseInt(st.nextToken()));
            }

            int i;
            for (i = 1; x >= 0; i++) {
                if (!(a.contains(i))) {
                    if (x > 0) x--;
                    else break;
                }
            }
            System.out.println(i-1);
        }
        br.close();
    }
}
