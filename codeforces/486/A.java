import java.util.Scanner;

/**
 * Created by Ayushi on 27/03/2018.
 */
public class CalculatingFunction_486A {
    public static void main(String[] args) {
        long ans;
        Scanner scan = new Scanner(System.in);
        long n = scan.nextLong();
        scan.close();

        if (n % 2 == 0) {
            ans = n / 2;
        }
        else {
            ans = ((((n-1)/2)+1)*-1);
        }

        System.out.println(ans);
    }
}
