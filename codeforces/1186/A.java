import java.io.*;

/**
 * Created by Suneet on 28/06/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        int m = Integer.parseInt(temp[1]);
        int k = Integer.parseInt(temp[2]);
        r.close();

        if (m >= n && k >= n) {
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }
    }
}
