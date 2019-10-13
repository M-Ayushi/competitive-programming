import java.io.*;
import java.util.Arrays;

/**
 * Created by Ayushi on 13/10/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = br.readLine().split(" ");
        int t = Integer.parseInt(temp[0]);
        for (int i = 0; i < t; i++) {
            temp = br.readLine().split(" ");
            int n = Integer.parseInt(temp[0]);
            String[] a = br.readLine().split("");
            //int t = Integer.parseInt(temp[0]);

            if (Arrays.asList(a).contains("1")) {
                int l, r;
                l = r = 0;
                for (int j = 0; j < n; j++) {
                    if (a[j].equals("1")) {
                        l = n-j;
                        break;
                    }
                }
                for (int k = n-1; k >= 0; k--) {
                    if (a[k].equals("1")) {
                        r = k+1;
                        break;
                    }
                }

                System.out.println(Math.max(l, r)*2);
            }
            else {
                System.out.println(n);
            }
        }
        br.close();
    }
}
