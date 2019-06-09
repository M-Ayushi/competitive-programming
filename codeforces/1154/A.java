import java.io.*;
import java.util.Arrays;

/*
    User: Ayushi
    Time: 20:32
    Date: 09 Jun 2019
    Website: Codeforces
    Problem: CF_1154A_RestoringThreeNumbers
*/

public class CF_1154A_RestoringThreeNumbers {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = r.readLine().split(" ");
        r.close();

        int[] in = new int[4];
        for (int i = 0; i < 4; i++) {
            in[i] = Integer.parseInt(temp[i]);
        }
        Arrays.sort(in);

        int a = (in[3] - in[0]);
        int b = (in[3] - in[1]);
        int c = (in[3] - in[2]);
        System.out.println(a + " " + b + " " + c);
    }
}
