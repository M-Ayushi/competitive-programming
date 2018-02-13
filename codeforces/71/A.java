import java.util.Scanner;

/**
 * Created by Ayushi on 2/13/2018.
 */
public class wayTooLongWords71A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String[] ans = new String[n + 1];
        String temp;
        for (int i = 0; i < n + 1; i++) {
            temp = scan.nextLine();
            /*if (i == n) {
                continue;
            }
            else*/ if (temp.length() > 10) {
                ans[i] = abbreviate(temp);
            }
            else {
                ans[i] = temp;
            }
        }
        for (int j = 0; j < n + 1; j++) {
            System.out.println(ans[j]);
        }
    }
    public static String abbreviate (String a) {
        String[] b = a.split("");
        int length = a.length();
        int l = length - 2;
        String c = b[0] + l + b[length - 1];
        //System.out.println(c);

        return c;
    }
}
