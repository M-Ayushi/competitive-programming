import java.io.*;

/**
 * Created by Ayushi on 18 Oct 2020.
 * Problem:
 * Round:
 */

public class C {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        br.close();

        int n = s.length();
        System.out.println(3);
        System.out.println("L " + (n-1));
        System.out.println("R " + (n-1));
        System.out.println("R " + ((n*2)-1));
    }
}
