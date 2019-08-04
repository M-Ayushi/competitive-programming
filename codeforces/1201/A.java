import java.io.*;
import java.util.HashMap;

/**
 * Created by Ayushi on 04/08/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        //String[] l = {"A", "B", "C", "D", "E"};
        //String[] ln = new String[5];
        HashMap<String, Integer> hmap = new HashMap<>();

        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        int m = Integer.parseInt(temp[1]);
        String[][] a = new String[n][m];
        for (int i = 0; i < n; i++) {
            a[i] = r.readLine().split("");
        }
        int[] s = new int[m];
        temp = r.readLine().split(" ");
        for (int j = 0; j < m; j++) {
            s[j] = Integer.parseInt(temp[j]);
        }
        r.close();

        int max, ans;
        ans = 0;
        for (int p = 0; p < m; p++) {
            max = 0;
            hmap.put("A", 0);
            hmap.put("B", 0);
            hmap.put("C", 0);
            hmap.put("D", 0);
            hmap.put("E", 0);
            for (int q = 0; q < n; q++) {
                hmap.put(a[q][p], hmap.get(a[q][p])+1);
                max = Math.max(max, hmap.get(a[q][p]));
                //System.out.println(hmap);
            }
            ans += s[p]*max;
        }
        /*for (int k = 0; k < n; k++) {
            c = 0;
            for (int l = 0; l < n; l++) {
                for (int o = 0; o < m; o++) {
                    if (a[k][o].equals(a[l][o])) c += s[o];
                }
            }
            ans = Math.max(ans, c);
        }*/
        System.out.println(ans);
    }
}
