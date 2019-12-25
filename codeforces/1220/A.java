import java.io.*;

/**
 * Created by Ayushi on 25/12/2019.
 */

public class CF_1220A_Cards {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] a = r.readLine().split(" ");
        int n = Integer.parseInt(a[0]);
        a = r.readLine().split("");
        r.close();

        int o, z;
        o = z = 0;
        for (int i = 0; i < n; i++) {
            if (a[i].equals("n")) o++;
            if (a[i].equals("z")) z++;
        }
        for (int j = 0; j < o; j++) System.out.print("1 ");
        for (int k = 0; k < z; k++) System.out.print("0 ");
    }
}
