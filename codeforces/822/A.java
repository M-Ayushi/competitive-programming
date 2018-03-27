import java.util.Scanner;

/**
 * Created by alok.mahajan on 27/03/2018.
 */
public class IAmBoredWithLife_822A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long a = scan.nextLong();
        //BigInteger a = BigInteger.valueOf(A);
        long b = scan.nextLong();
        //BigInteger b = BigInteger.valueOf(B);
        scan.close();

        System.out.println(factorial(Math.min(a, b)));

        //System.out.println(gcd1(a, b));
    }
    public static long factorial(long f) {
        if (f == 0)
            return 1;
        else
            return f * factorial(f-1);
    }

    /*public static BigInteger gcd1(BigInteger c, BigInteger d) {
         return c.gcd(d);
    }*/

}
