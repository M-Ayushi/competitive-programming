import java.io.*;

/*
    User: Ayushi
    Time: 13:56
    Date: 11 Jun 2019
    Website: Codeforces
    Problem: A
*/

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        r.close();

        int ans = 0;
        if (n % 2 == 0) {
            ans = (int)Math.pow(2, n/2);;
        }

        System.out.println(ans);
    }
}
