import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by Ayushi on Mon, 19 Nov 2018.
 */
public class CF_59A_Word {
    public static void main(String[] args) {
        String[] caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".split("");
        Scanner scan = new Scanner(System.in);
        String n = scan.next();
        scan.close();
        String[] m = n.split("");
        int l = m.length;
        
        int b = 0;
        for (int i = 0; i < l; i++) {
            if (Arrays.asList(caps).contains(m[i])) {
                b++;
            }
        }
        int s = l-b;
        String ans = n.toLowerCase();
        if (b > s) {
            ans = n.toUpperCase();
        }
        System.out.println(ans);
    }
}
