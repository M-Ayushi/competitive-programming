import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 21 Nov 2020.
 * Problem:
 * Round:
 */

public class CF_1451C {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        HashMap<Character, Integer> a = new HashMap<>();
        HashMap<Character, Integer> b = new HashMap<>();
        while (t-- > 0) {
            a.clear();
            b.clear();
            for (int i = 97; i < 123; i++) {
                a.put((char)i, 0);
                b.put((char)i, 0);
            }

            st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());
            String s = br.readLine();
            for (int i = 0; i < n; i++) {
                a.replace(s.charAt(i), a.get(s.charAt(i))+1);
            }
            s = br.readLine();
            for (int i = 0; i < n; i++) {
                b.replace(s.charAt(i), b.get(s.charAt(i))+1);
            }

            int c = 0;
            boolean ans = true;
            int x, y;
            for (int i = 97; i < 123; i++) {
                x = a.get((char) i);
                y = b.get((char) i);
                if ((x+c) < y) {
                    ans = false;
                    break;
                }

                else {
                    if (((x+c) - y) % k == 0) {
                        c = (x+c) - y;
                    }
                    else {
                        ans = false;
                        break;
                    }
                }
            }
            System.out.println(ans ? "Yes":"No");
        }
        br.close();
    }
}
