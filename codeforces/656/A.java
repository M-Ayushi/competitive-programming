import java.util.Scanner;

/**
 * Created by Ayushi on 28/03/2016.
 */
public class Problem1 {
    public static void main(String[] args) throws NullPointerException {
        Scanner scan = new Scanner(System.in);
        int input = scan.nextInt();
        int ans = 2;
        int x = 100;
        int y = 13;

        if (input <= 12) {
            System.out.println(powerN(ans, input));
        }
        else if (input > 12 && input<=35){
            long temp1 =  (powerN(ans, input));
            int factor = input - y;
            long temp2 = x * (powerN(ans, factor));
            System.out.println(temp1- temp2);
        }
    }

    public static long powerN(int base, int n) {
        if (n < 0) {
            throw new IllegalArgumentException("Illegal Power Argument");
        }
        if (n == 0) {
            return 1;
        } else {
            return base * powerN(base, n - 1);
        }
    }
}