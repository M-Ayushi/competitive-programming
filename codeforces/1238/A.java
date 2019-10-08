import java.io.*;

/**
 * Created by Ayushi on 08/10/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        for (int i = 0; i < n; i++) {
            temp = r.readLine().split(" ");
            long a = Long.parseLong(temp[0]);
            long b = Long.parseLong(temp[1]);

            long c = a-b;

            //System.out.println(isPrime(2));

            if (c == 1) {
                System.out.println("NO");
            }
            else {
                System.out.println("YES");
            }
        }
        r.close();
    }

    private static boolean isPrime(long x) {
        //if (x == 2) return true;
        //else if (x == 2)
        //else {
            for (long i = 2; i < (x+1)/2; x++) {
                //System.out.println("x = " + x);
                //System.out.println("i = " + i);
                if (x % i == 0) {
                    //System.out.println("broken");
                    return false;
                }
            }
            return true;
        //}
    }
}
