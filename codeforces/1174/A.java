import java.io.*;
import java.util.Arrays;

/*
    User: Ayushi
    Time: 14:55
    Date: 03 Jun 2019
    Website: Codeforces
    Problem: 1174A
*/

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        int m = n*2;
        temp = r.readLine().split(" ");
        int[] a = new int[m];
        for (int i = 0; i < m; i++) {
            a[i] = Integer.parseInt(temp[i]);
        }
        r.close();

        Arrays.sort(a);

        //int[] b = new int[n];
        //int[] c = new int[n];
        int b, c;
        b = c = 0;

        for (int j = 0; j < n; j++) {
            b += a[j];
            c += a[(m-1)-j];
        }

        if (b != c) {
            for (int k = 0; k < m; k++) {
                System.out.print(a[k] + " ");
            }
        }
        else {
            System.out.println(-1);
        }
    }
}
