import java.util.*;

/*
    User: Ayushi
    Time: 16:37
    Date: 11 Mar 2019
    Website: Codeforces
    Problem: A
*/

public class A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] s = new int[n];
        int[] e = new int[n];
        for (int i = 0; i < n; i++) {
            s[i] = scan.nextInt();
            e[i] = scan.nextInt();
        }
        int k = scan.nextInt();
        scan.close();

        for (int j = 0; j < n; j++) {
            if (k >=s[j] && k <= e[j]) {
                System.out.println(n-j);
                break;
            }
        }
    }
}
