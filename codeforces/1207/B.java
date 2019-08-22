import java.io.*;
import java.util.Arrays;

/**
 * Created by Ayushi on 22/08/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        int m = Integer.parseInt(temp[1]);
        int[][] a = new int[n][m];
        int[][] b = new int[n][m];

        for (int i = 0; i < n; i++) {
            temp = r.readLine().split(" ");
            for (int j = 0; j < m; j++) {
                a[i][j] = Integer.parseInt(temp[j]);
            }
            Arrays.fill(b[i], 0);
        }
        r.close();

        int c = 0;
        int[][] ans = new int[2500][2];
        for (int k = 0; k < n-1; k++) {
            for (int l = 0; l < m-1; l++) {
                if (a[k][l] + a[k][l+1] + a[k+1][l] + a[k+1][l+1] == 4) {
                    ans[c][0] = k+1;
                    ans[c][1] = l+1;
                    c++;

                    b[k][l] = 1;
                    b[k][l+1] = 1;
                    b[k+1][l] = 1;
                    b[k+1][l+1] = 1;
                }
            }
        }
        if (Arrays.deepEquals(a, b)) {
            System.out.println(c);
            for (int o = 0; o < c; o++) {
                System.out.println(ans[o][0] + " " + ans[o][1]);
            }
        }
        else {
            System.out.println(-1);
        }
    }
}
