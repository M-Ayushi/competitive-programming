import java.io.*;

/**
 * Created by Ayushi on 20/08/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = br.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        int l = Integer.parseInt(temp[1]);
        int r = Integer.parseInt(temp[2]);
        br.close();
        int min, max, x, i;
        min = max = 0;
        x = 1;
        for (i = 0; i < l; i++) {
            min += x;
            x = x * 2;
        }
        min += (n-l);

        x = 1;
        for (int j = 0; j < r; j++) {
            max += x;
            x = x * 2;
        }
        max += ((n-r)*(x/2));
        System.out.println(min + " " + max);
    }
}
