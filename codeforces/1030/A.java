import java.util.Scanner;

/**
 * Created by Ayushi on Mon, 19 Nov 2018.
 */
public class CF_1030A_InSearchOfAnEasyProblem {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int total  = 0;
        for (int i = 0; i < n; i++) {
            total += scan.nextInt();
        }
        if (total > 0) {
            System.out.println("HARD");
        }
        else {
            System.out.println("EASY");
        }
    }
}
