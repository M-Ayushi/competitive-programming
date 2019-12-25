import java.io.*;

/**
 * Created by Ayushi on 25/12/2019.
 */

public class CF_1281A_SuffixThree {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] a = r.readLine().split(" ");
        int t = Integer.parseInt(a[0]);
        for (int i = 0; i < t; i++) {
            a = r.readLine().split("");

            if (a[a.length-1].equals("o")) System.out.println("FILIPINO");
            else if (a[a.length-1].equals("u")) System.out.println("JAPANESE");
            else System.out.println("KOREAN");
        }
        r.close();
    }
}
