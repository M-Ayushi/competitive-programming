import java.util.Scanner;

/**
 * Created by CoderGirl05 on 26/02/2018.
 */
public class StringTask_118A {
    public static void main(String[] args) {
        String[] vowels = "aeiouy".split("");
        String[] consonants = "bcdfghjklmnpqrstvwxz".split("");
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();
        input = input.toLowerCase();
        String[] temp = input.split("");
        String ans = "";
        String t;

        main_loop:
        for (int i = 0; i < input.length(); i++) {
            t = temp[i];
            //System.out.println("First " + t );

            for (int j = 0; j < vowels.length; j++) {
                if (t.equals(vowels[j])) {
                    //System.out.println("In the Loop First " );
                    continue main_loop;
                }
            }
            for (int j1 = 0; j1 < consonants.length; j1++) {
                if (t.equals(consonants[j1])) {
                    ans = ans + "." + t;
                    //System.out.println("In the Loop Second "+ ans );
                    continue main_loop;
                }
            }
        }

        System.out.println(ans);
    }
}