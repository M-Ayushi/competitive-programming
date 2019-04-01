import java.util.*;

/*
    User: Ayushi
    Time: 17:09
    Date: 01 Apr 2019
    Website: Codeforces
    Problem: D
*/

public class D {
    public static void main(String[] args) {
        int y = 0;
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] z = new int[n];
        for (int i = 0; i < n; i++) {
            z[i] = scan.nextInt();
        }
        y = z[2];
        Arrays.sort(z);
        System.out.println((2 + (z[0] ^ y)));
    }
}
