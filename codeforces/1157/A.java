import java.io.*;
import java.util.ArrayList;

/*
    User: Ayushi
    Time: 15:18
    Date: 26 Apr 2019
    Website: Codeforces
    Problem: A
*/

public class A {
    public static void main(String[] args) throws IOException{
        ArrayList<Integer> z = new ArrayList<>();
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        r.close();

        while (true) {
            //System.out.println(n);
            z.add(n);
            n++;
            while (n % 10 == 0) {
                n = n/10;
            }
            if (z.contains(n)) {
                break;
            }
        }

        System.out.println(z.size());
    }
}
