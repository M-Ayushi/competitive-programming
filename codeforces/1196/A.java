import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 01 Jan 2020.
 */

public class CF_1196A_ThreePilesOfCandies {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        int t = Integer.parseInt(temp);

        for (int i = 0; i < t; i++) {
            temp = br.readLine();
            st = new StringTokenizer(temp, " ");
            long[] a = new long[3];
            a[0] = Long.parseLong(st.nextToken());
            a[1] = Long.parseLong(st.nextToken());
            a[2] = Long.parseLong(st.nextToken());

            Arrays.sort(a);

            a[2] -= (a[1]-a[0]);
            System.out.println(a[1] + (a[2]/2));
        }
        br.close();
    }
}
