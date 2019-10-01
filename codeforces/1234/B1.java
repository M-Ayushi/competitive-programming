import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 01/10/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        long n = Long.parseLong(temp[0]);
        long k = Long.parseLong(temp[1]);
        //long[] a = new long[n];
        ArrayList<Long> c = new ArrayList<>();
        long m;
        StringTokenizer st = new StringTokenizer(r.readLine());
        //temp = r.readLine().split(" ");
        r.close();
        while(st.hasMoreTokens()) {
            m = Long.parseLong(st.nextToken());

            if (!(c.contains(m))) {
                c.add(m);
            }
            if (c.size() > k) {
                c.remove(0);
            }
        }
        System.out.println(c.size());
        Collections.reverse(c);
        //String ans = Arrays.toString(c.toArray());
        //System.out.println(ans);
        for (long a:c) {
            System.out.print(a + " ");
        }
        //System.out.println(c);
    }
}
