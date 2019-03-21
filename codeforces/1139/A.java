import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

/*
    User: Ayushi
    Time: 15:38
    Date: 21 Mar 2019
    Website: Codeforces
    Problem: A
*/

public class A {
    public static void main(String[] args) throws IOException {
        int ans = 0;
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = reader.readLine().split(" ");
        int n = Integer.parseInt(temp[0]);
        temp = reader.readLine().split("");
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(temp[i]);
            if (a[i] % 2 == 0) {
                ans += (i+1);
            }
        }
        reader.close();
        System.out.println(ans);
    }
}
