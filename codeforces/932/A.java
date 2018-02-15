import java.util.Scanner;

/**
 * Created by Ayushi on 2/15/2018.
 */
public class p1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        String reverse = new StringBuffer(input).reverse().toString();
        String ans;

        if(input.equals(reverse)) {
            ans = input;
        }
        else {
            ans = input + reverse;
        }
        System.out.println(ans);
    }
}
