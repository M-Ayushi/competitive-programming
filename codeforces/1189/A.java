import java.io.*;
import java.util.Arrays;

/**
 * Created by Ayushi on 05/07/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        String a = r.readLine();
        r.close();
        String[] in = a.split("");
        int z, o;
        z = o = 0;
        for (int j = 0; j < n; j++) {
            if (in[j].equals("0")) z++;
            else o++;
        }
        //System.out.println(Arrays.toString(in));

        if (((n % 2) == 1) || ((n == 2) && (in[0].equals(in[1]))) || (z != o)) {
            System.out.println(1);
            System.out.println(a);
        }
        else {
            System.out.println(2);
            System.out.print(in[0] + " ");
            for (int i = 1; i < n; i++) {
                System.out.print(in[i]);
            }
        }
    }
}
