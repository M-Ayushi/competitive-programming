import java.util.*;

/*
    User: Ayushi
    Time: 21:20
    Date: 03 Mar 2019
    Website: Codeforces
    Problem: CF_112A_PetyaAndStrings
*/

public class CF_112A_PetyaAndStrings {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        a = a.toLowerCase();
        b = b.toLowerCase();
        String[] arr = {a, b};
        Arrays.sort(arr);
        if (a.equals(b)) {
            System.out.println(0);
        }
        else if (arr[0].equals(a)) {
            System.out.println(-1);
        }
        else {
            System.out.println(1);
        }
    }
}
