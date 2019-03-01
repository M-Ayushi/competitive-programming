import java.util.*;

/*
    User: Ayushi
    Time: 22:37
    Date: 01 Mar 2019
    Website: Codeforces
    Problem: CF_443A_AntonAndLetters
*/

public class CF_443A_AntonAndLetters {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String in = scan.nextLine();
        scan.close();
        String a = in.replaceAll("\\{|}|, ", "");
        String[] b = a.split("");

        ArrayList<String> ans = new ArrayList<>();
        for (int i = 0; i < a.length(); i++) {
            if (!(ans.contains(b[i]))) {
                ans.add(b[i]);
            }
        }

        System.out.println(ans.size());
    }
}
