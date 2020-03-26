import java.io.*;
//import java.util.*;

/**
 * Created by Ayushi on 26 Mar 2020.
 * Problem:
 * Round:
 */

public class C {
    public static void main(String[] args) throws IOException {
        //StringTokenizer st;
        //StringBuilder append = new StringBuilder();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        while (t-- > 0) {
            temp = br.readLine();
            int n = Integer.parseInt(temp);
            String x = br.readLine();

            boolean z = true;
            StringBuilder a = new StringBuilder("1");
            StringBuilder b = new StringBuilder("1");
            for (int i = 1; i < n; i++) {
                if (x.charAt(i) == '0') {
                    //a.append("0");
                    a.append("0");
                    b.append("0");
                }
                else if (x.charAt(i) == '1') {
                    if (z) {
                        a.append("1");
                        b.append("0");
                        z = false;
                    }
                    else {
                        a.append("0");
                        b.append("1");
                    }
                }
                else {
                    //a.append('1');
                    //b.append('1');
                    if (z) {
                        a.append("1");
                        b.append("1");
                    }
                    else {
                        a.append("0");
                        b.append("2");
                    }
                }
            }
            System.out.println(a);
            System.out.println(b);
            //st = new StringTokenizer(temp, " ");
            //int[] a = new int[n];
            //int j = 0;
            //while (st.hasMoreTokens()) {
                //a[j] = Integer.parseInt(st.nextToken());
            //}
        }
        br.close();
    }
}
