import java.util.*;

/*
    User: Ayushi
    Time: 22:59
    Date: 01 Mar 2019
    Website: Codeforces
    Problem: CF_984A_Game
*/

public class CF_984A_Game {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = scan.nextInt();
        }
        scan.close();

        Arrays.sort(a);
        int median;
        if (n % 2 == 1) {
            median = (a[(n/2)]);
        }
        else {
            median = a[(n/2)-1];
        }
        System.out.println(median);
    }
}
