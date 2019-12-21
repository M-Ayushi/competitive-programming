import java.io.*;

/**
 * Created by Ayushi on 21/12/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        r.close();

        for (int j = 2; j < (1000000000 - n); j++) {
            if (isComposite(j) && isComposite(j+n)) {
                System.out.println((j+n) + " " + j);
                break;
            }
        }
        //System.out.println("isComposite(8) = " + isComposite(8));
        //System.out.println("isComposite(9) = " + isComposite(9));
    }
    public static boolean isComposite(int a) {
        //System.out.println("a = " + a);
        double sr = Math.sqrt(a);
        //System.out.println("sr = " + sr);
        int s = (int)Math.ceil(sr);
        //System.out.println("s = " + s);
        for (int i = 2; i <= Math.min(s, a-i); i++) {
            //System.out.println("i = " + i);
            if (a % i == 0) {
                //System.out.println("....i = " + i);
                return true;

            }
        }
        return false;
    }
}
