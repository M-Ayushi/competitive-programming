import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 07 Aug 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine(), " ");
        //int[] a = new int[n];
        int a;
        int two, four, six, ate;
        two = four = six = ate = 0;
        HashMap<Integer, Integer> hmap = new HashMap<>();
        //int j = 0;
        while (st.hasMoreTokens()) {
            a = Integer.parseInt(st.nextToken());
            hmap.putIfAbsent(a, 0);
            hmap.replace(a, hmap.get(a) + 1);

            //System.out.println(hmap);

            if (hmap.get(a) == 2) {
                two++;
            }
            else if (hmap.get(a) == 4) {
                four++;
                two--;
            }
            else if (hmap.get(a) == 6){
                six++;
                four--;
            }
            else if (hmap.get(a) == 8) {
                ate++;
                six--;
            }
            //j++;
        }
        int t = Integer.parseInt(br.readLine());
        String x;
        int y;
        while (t-- > 0) {
            st = new StringTokenizer(br.readLine(), " ");
            x = st.nextToken();
            y = Integer.parseInt(st.nextToken());

            hmap.putIfAbsent(y, 0);
            if (x.equals("+")) {
                hmap.replace(y, hmap.get(y)+1);

                if (hmap.get(y) == 2) {
                    two++;
                }
                else if (hmap.get(y) == 4) {
                    four++;
                    two--;
                }
                else if (hmap.get(y) == 6){
                    six++;
                    four--;
                }
                else if (hmap.get(y) == 8) {
                    ate++;
                    six--;
                }
            }

            else {
                hmap.replace(y, hmap.get(y)-1);

                if (hmap.get(y) == 1) {
                    two--;
                }
                else if (hmap.get(y) == 3) {
                    four--;
                    two++;
                }
                else if (hmap.get(y) == 5){
                    six--;
                    four++;
                }
                else if (hmap.get(y) == 7) {
                    ate--;
                    six++;
                }
            }

            String ans = "NO";
            if (ate >= 1) ans = "YES";
            else if (six >= 2) ans = "YES";
            else if (six >= 1 && ((two+four) >= 1)) ans = "YES";
            else if (four >= 2) ans = "YES";
            else if (four >= 1 && (two >= 2)) ans = "YES";
            //else if (two >= 4) ans = "YES";

            System.out.println(ans);
        }
        br.close();
    }
}
