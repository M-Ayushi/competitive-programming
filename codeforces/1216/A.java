import java.io.*;

/**
 * Created by Ayushi on 21/09/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] a = r.readLine().split(" ");
        int n = Integer.parseInt(a[0]);
        a = r.readLine().split("");
        r.close();

        int ans = 0;
        for (int i = 0; i < n-1; i+=2) {
            if (a[i].equals(a[i+1])) {
                a[i] = "a";
                a[i+1] = "b";
                ans++;
            }
        }

        System.out.println(ans);
        for (String j: a) {
            System.out.print(j);
        }
    }
}
