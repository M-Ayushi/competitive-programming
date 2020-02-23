import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 23 Feb 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int tc = Integer.parseInt(temp);

        while (tc-- > 0) {
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            int b = Integer.parseInt(st.nextToken());
            int t = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            String in = br.readLine();
            String[] a = in.split("");
            int n = in.length();
            /*int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
            }*/

            String l = a[n-2];
            m -= (l.equals("A")? b:t);
            int index = n;
            if (m >= 0) index--;

            for (int i = n-3; i >= 0 && m >= 0; i--) {
                index = (i)+1;
                if (!(a[i].equals(l))) {
                    if (a[i].equals("A")) {
                        if ((m - b) < 0) {
                            index = i+2;
                            break;
                        }
                        else {
                            m -= b;
                        }
                    }
                    else {
                        if ((m - t) < 0) {
                            index = i+2;
                            break;
                        }
                        else {
                            m -= t;
                        }
                    }
                    l = a[i];
                }
            }

            System.out.println(index);
        }
        br.close();
    }
}
