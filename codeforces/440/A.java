import java.util.*;

/*
    User: Ayushi
    Time: 20:44
    Date: 02 Mar 2019
    Website: Codeforces
    Problem: CF_440A_ForgottenEpisode
*/

public class CF_440A_ForgottenEpisode {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] e = new int[n-1];
        for (int i = 0; i < n-1; i++) {
            e[i] = scan.nextInt();
        }
        scan.close();

        Arrays.sort(e);
        boolean z = true;
        for (int j = 0; j < n-1; j++) {
            if (e[j] != j+1) {
                System.out.println(j+1);
                z = false;
                break;
            }
        }

        if (z) {
            System.out.println(n);
        }
    }
}
