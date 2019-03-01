import java.util.*;

/*
    User: Ayushi
    Time: 22:13
    Date: 01 Mar 2019
    Website: Codeforces
    Problem: CF_510A_FoxAndSnake
*/

public class CF_510A_FoxAndSnake {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        scan.close();
        char[] charArray = new char[m-1];
        Arrays.fill(charArray, '#');
        String f = new String(charArray) + "#";
        Arrays.fill(charArray, '.');
        String l = "#" + new String(charArray);
        String r = new String(charArray) + "#";
        for (int i = 1; i <= n; i++) {
            if (i % 4 == 0) {
                System.out.println(l);
            }
            else if (i % 2 == 0) {
                System.out.println(r);
            }
            else {
                System.out.println(f);
            }
        }
    }
}
