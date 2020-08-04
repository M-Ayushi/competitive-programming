import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 04 Aug 2020.
 * Problem:
 * Round:
 */

public class CF_961A {
    public static void main(String[] args) throws IOException {
        HashMap<Integer, Integer> hmap = new HashMap<>();
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        st = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine(), " ");
        int a;
        while (st.hasMoreTokens()) {
            a = Integer.parseInt(st.nextToken());
            if (hmap.containsKey(a))hmap.replace(a, hmap.get(a)+1);
            else hmap.put(a, 1);
        }
        if (hmap.size() < n) System.out.println("0");
        else {
            int min = 1000;
            for (int b : hmap.keySet()) {
                min = Math.min(min, hmap.get(b));
            }
            System.out.println(min);
        }
        br.close();
    }
}
