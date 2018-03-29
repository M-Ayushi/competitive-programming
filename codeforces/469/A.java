import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * Created by Ayushi on 29/03/2018.
 */
public class IWannaBeTheGuy_469A {
    public static void main(String[] args) {
        List <Integer> letters = new ArrayList<>();
        String ans = "I become the guy.";
        Scanner scan = new Scanner(System.in);
        int levels = scan.nextInt();

        int a = scan.nextInt();
        for (int i = 0; i < a; i++) {
            letters.add(scan.nextInt());
        }

        int b = scan.nextInt();
        for (int j = 0; j < b; j++) {
            letters.add(scan.nextInt());
        }
        scan.close();

        for (int z = 1; z <= levels; z++) {
            if (!letters.contains(z)) {
                ans = "Oh, my keyboard!";
                break;
            }
        }
        System.out.println(ans);
    }
}
