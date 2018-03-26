import java.util.Scanner;

/**
 * Created by alok.mahajan on 26/03/2018.
 */
public class FreeIceCream_686A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        long total = scan.nextLong();

        String sign;
        long digit;
        int distress = 0;
        for(int i = 0; i < n; i++) {
            sign = scan.next();
            digit = scan.nextInt();

            if(sign.equals("-") && total < digit) {
                distress++;
            }
            else if (sign.equals("-") && total >= digit) {
                total = total - digit;
            }
            else {
                total = total + digit;
            }
            //System.out.println(total);
        }
        scan.close();

        System.out.println(total + " " + distress);
    }
}
