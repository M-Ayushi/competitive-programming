import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

/**
 * Created by Ayushi on Tue, 29 May 2018.
 */
public class A {
    public static void main(String[] args) {
        String[] colours = {"blue", "green", "orange", "purple", "red", "yellow"};
        String[] gems = {"Space", "Time", "Soul", "Power", "Reality", "Mind"};
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        List<String> input = new ArrayList<String>();
        for (int i = 0; i < n; i++) {
            input.add(scan.next());
        }
        System.out.println(6-n);
        for (int j = 0; j < 6; j++) {
            if (!(input.contains(colours[j]))) {
                System.out.println(gems[j]);
            }
        }
        /*if (n == 0) {
            System.out.println(gems[0]);
            System.out.println(gems[1]);
            System.out.println(gems[2]);
            System.out.println(gems[3]);
            System.out.println(gems[4]);
            System.out.println(gems[5]);
        }
        else {
            String[] input = new String[n];
            for (int i = 0; i < n; i++) {
                input[i] = scan.next();
            }
            int in = 0;
            Arrays.sort(input);
            for (int j = 0; j < 6; j++) {
                System.out.println();
                if (!input[in].equals(colours[j])) {
                    System.out.println(gems[j]);
                } else {
                    in++;
                }
            }
        }*/
    }
}