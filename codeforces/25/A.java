import java.io.*;
import java.util.ArrayList;

/*
    User: Ayushi
    Time: 19:03
    Date: 08 Jun 2019
    Website: Codeforces
    Problem: CF_25A_IQTest
*/

public class CF_25A_IQTest {
    public static void main(String[] args) throws IOException {
        int t;
        ArrayList<Integer> e = new ArrayList<>();
        ArrayList<Integer> o = new ArrayList<>();
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        temp = r.readLine().split(" ");
        for (int i = 0; i < n; i++) {
            t = Integer.parseInt(temp[i]);
            if (t%2==0) e.add(i);
            else o.add(i);
        }
        r.close();

        if (e.size() == 1) System.out.println(e.get(0)+1);
        else System.out.println(o.get(0)+1);
    }
}
