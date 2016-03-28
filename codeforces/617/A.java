import java.util.Scanner;

/**
 * Created by mahaa on 28/03/2016.
 */
public class Elephant617A {
    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        int input = scan.nextInt();
        int ans = 0;

        while (input > 0) {
            if (input >= 5) {
                input = input - 5;
                ans++;
            }
            else if (input == 4) {
                input = input - 4;
                ans++;
            }
            else if (input == 3) {
                input = input - 3;
                ans++;
            }
            else if (input == 2) {
                input = input - 2;
                ans++;
            }
            else {
                    input = input - 1;
                    ans++;
            }
        }
        System.out.println(ans);
    }
}
