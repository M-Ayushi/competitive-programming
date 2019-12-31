import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 30/12/2019.
 * Website: Codeforces
 */

public class CF_1272C_YetAnotherBrokenKeyboard {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp = br.readLine();
        st = new StringTokenizer(temp, " ");
        long n = Integer.parseInt(st.nextToken());
        //int k = Integer.parseInt(st.nextToken());
        String t = br.readLine();
        ArrayList<String> a = new ArrayList<>();
        temp = br.readLine();
        st = new StringTokenizer(temp, " ");
        while (st.hasMoreTokens()) {
            a.add(st.nextToken());
        }
        br.close();

        long ans = 0;
        long d = 0;

        for (int i = 0; i < n; i++) {
            if (!(a.contains(String.valueOf(t.charAt(i))))) {
                ans += (d*(d+1))/2;
                d = 0;
            }
            else d++;
        }
        ans += (d*(d+1))/2;
        System.out.println(ans);
    }
}
