import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

/**
 * Created by Ayushi on Fri, 01 Jun 2018.
 */
public class B {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String[] w = new String[n];
        for (int i = 0; i < n; i++) {
            w[i] = scan.next();
        }
        scan.close();
        boolean z = true;
        Arrays.sort(w, Comparator.comparingInt(String::length));
        //System.out.println(Arrays.toString(w));
        for (int a = 1; a < n; a++) {
            if (!(w[a].contains(w[a-1]))) {
                z = false;
                break;
            }
        }

        if (z) {
            System.out.println("YES");
            for (int j = 0; j < n; j++) {
                System.out.println(w[j]);
            }
        }
        else {
            System.out.println("NO");
        }
    }
}
