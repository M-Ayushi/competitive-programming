import java.util.Scanner;

/**
 * Created by Ayushi on 2/15/2018.
 */
public class wordCapitalization281A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        int l = input.length();
        String[] c = input.split("");
        c[0] = c[0].toUpperCase();
        String ans = "";

        for (int i = 0; i < l; i++) {
            ans = ans + c[i];
        }
        System.out.println(ans);
    }
}
