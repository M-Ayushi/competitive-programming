import java.io.*;

/*
    User: Ayushi
    Time: 21:34
    Date: 11 Jun 2019
    Website: Codeforces
    Problem: CF_155A_I_love_username
*/

public class CF_155A_I_love_username {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        temp = r.readLine().split(" ");
        r.close();

        int min = Integer.parseInt(temp[0]);
        int max = Integer.parseInt(temp[0]);
        int ans = 0;

        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(temp[i]);

            if (a[i] < min || a[i] > max) {
                ans++;
                if (a[i] < min) min = a[i];
                else max = a[i];
            }
        }

        System.out.println(ans);
    }
}
