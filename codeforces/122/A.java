import java.util.Scanner;

/**
 * Created by alok.mahajan on 26/03/2018.
 */
public class LuckyDivision_122A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();

        boolean ans = false;
        String[] digits = String.valueOf(n).split("");

        if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0) {
            ans = true;
        }
        else {
            for (int i = 0; i < digits.length; i++) {
                if (digits[i].equals("4") || digits[i].equals("7")) {
                    ans = true;
                }
                else {
                    ans = false;
                    break;
                }
            }
        }

        if (ans) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
