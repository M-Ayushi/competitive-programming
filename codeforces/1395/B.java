import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 12 Aug 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        st = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int x = Integer.parseInt(st.nextToken());
        int y = Integer.parseInt(st.nextToken());
        br.close();

        int a = 1;
        //int b = y;
        //int c, d;
        int b;

        System.out.println(x + " " + y);
        System.out.println(a + " " + y);

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                for (int j = 1; j <= m; j++) {
                    //if (j % 2 == 0) b = (m-j)+1;
                    //else b = j;
                    if (!((i == x && j == y) || (i == a && j == y))) {
                        System.out.println(i + " " + j);
                    }
                }
            }
            else {
                for (int j = m; j > 0; j--) {
                    //if (j % 2 == 0) b = (m-j)+1;
                    //else b = j;
                    if (!((i == x && j == y) || (i == a && j == y))) {
                        System.out.println(i + " " + j);
                    }
                }
            }
        }
    }
}
