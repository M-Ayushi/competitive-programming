import java.util.Scanner;

/**
 * Created by Ayushi on 01/04/2018.
 */
public class p3 {
    public static void main(String[] args) {
        String t = "YES";
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] stacks = new int[n];
        for (int i = 0; i < n; i++) {
            stacks[i] = scan.nextInt();
        }
        scan.close();

        for (int j = 0; j < n-1; j++) {
            if (stacks[j] - stacks[j+1] >= 2) {
                t = "NO";
                break;
            }
        }
        System.out.println(t);
    }
}
