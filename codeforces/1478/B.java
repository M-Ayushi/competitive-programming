import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 28 Jan 2021.
 * Problem:
 * Round:
 */

public class CF_1478B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            HashMap<Integer, Integer> hmap = new HashMap<>();
            for (int i = 0; i < 10; i++) {
                hmap.put(i, d*10);
            }
            for (int i = 1; i < 11; i++) {
                if (hmap.get((d*i)%10) == d*10) {
                    hmap.replace((d * i) % 10, (d * i));
                }
            }
            //System.out.println(hmap);
            st = new StringTokenizer(br.readLine(), " ");
            int a;
            while (n-- > 0) {
                a = Integer.parseInt(st.nextToken());
                /*while (hmap.get(a%10) == -1) {
                    a = a / 10;
                }*/
                if (a < hmap.get(a%10)) System.out.println("NO");
                else System.out.println("YES");
            }
        }
        br.close();
    }
}
