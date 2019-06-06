import java.io.*;
import java.util.ArrayList;

/*
    User: Ayushi
    Time: 12:18
    Date: 06 Jun 2019
    Website: Codeforces
    Problem: CF_1157A_ReachableNumbers
*/

public class CF_1157A_ReachableNumbers {
    public static void main(String[] args) throws IOException {
        ArrayList<Integer> rn = new ArrayList<>();
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        r.close();

        while (!(rn.contains(n))) {
            rn.add(n);
            n++;

            while (n % 10 == 0) n = n/10;
        }

        System.out.println(rn.size());
    }
}
