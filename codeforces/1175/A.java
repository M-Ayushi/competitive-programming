//import java.io.*;
import java.util.*;

/*
    User: Ayushi
    Time: 17:01
    Date: 05 Jun 2019
    Website: Codeforces
    Problem: A
*/

public class A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        //BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        //String[] temp = r.readLine().split(" ");
        long n = scan.nextLong();

        long a, b, z;
        for (long i = 0; i < n; i++) {
            //temp = r.readLine().split(" ");
            a = scan.nextLong();
            b = scan.nextLong();
            z = -1;
            while (a > 0){
                z += a%b;
                z++;
                a = a/b;
                //System.out.println("z = " + z);
                //System.out.println("a = " + a);
                //System.out.println("b = " + b);
                /*if (a % b == 0) a = a / b;
                else a--;*/
            }
            System.out.println(Math.abs(z));
        }
        scan.close();
    }
}
