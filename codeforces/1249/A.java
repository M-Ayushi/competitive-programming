import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 01 Jan 2020.
 */

public class CF_1249A_YetAnotherDividingIntoTeams {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        for (int i = 0; i < t; i++) {
            //a.clear();
            temp = br.readLine();
            int n = Integer.parseInt(temp);
            ArrayList<Integer> a = new ArrayList<>(n);
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            boolean ans = true;
            int z;
            while (st.hasMoreTokens() && ans) {
                 z = Integer.parseInt(st.nextToken());

                 if (a.contains(z-1) || a.contains(z+1)) ans = false;

                 a.add(z);
            }

            System.out.println(ans ? 1:2);
        }
        br.close();
    }
}
