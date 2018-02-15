import java.util.Scanner;

/**
 * Created by Ayushi on 2/13/2018.
 */
public class nextRound158A {
    public static void main(String[] args) {
        int ans = 0;
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int sc = scan.nextInt();
        int up = sc - 1;

        int[] participants = new int[n];

        for (int i = 0; i < n; i++) {
            participants[i] = scan.nextInt();
            if (participants[i] >= participants[up] && participants[i] >= 1) {
                ans++;
            } else {
                continue;
            }
        }

        System.out.println(ans);

    }
}
