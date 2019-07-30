import java.io.*;

/**
 * Created by Ayushi on 30/07/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        int x = Integer.parseInt(temp[1]);
        int y = Integer.parseInt(temp[2]);
        temp = r.readLine().split(" ");
        int[] d = new int[n];
        for (int m = 0; m < n; m++) {
            d[m] = Integer.parseInt(temp[m]);
        }
        r.close();

        main_loop:
        for (int i = 0; i < n; i++) {
            //System.out.println("In the loop");
            for (int j = i-1; j >= Math.max(i-x, 0); j--) {
                //System.out.println("Loop a");
                if (d[i] > d[j]) continue main_loop;
            }
            for (int k = i+1; k < Math.min(i+y+1, n); k++) {
                //System.out.println("Loop b");
                if (d[i] > d[k]) continue main_loop;
            }
            System.out.println(i+1);
            break;
        }
    }
}
