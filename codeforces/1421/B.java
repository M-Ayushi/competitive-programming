import java.io.*;

/**
 * Created by Ayushi on 18 Oct 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            String[] s = new String[n];
            for (int j = 0; j < n; j++){
                s[j] = br.readLine();
            }
            String ans = ((s[0].charAt(1)) + " " + (s[1].charAt(0)) + " " + (s[n-2].charAt(n-1)) + " " + (s[n-1].charAt(n-2)));
            //System.out.println("ans = " + ans);
            
            switch (ans) {
                case "0 0 0 0":
                case "1 1 1 1":
                    System.out.println(2);
                    System.out.println(1 + " " + 2);
                    System.out.println(2 + " " + 1);
                    break;
                case "0 0 0 1":
                case "1 1 1 0":
                    System.out.println(1);
                    System.out.println((n - 1) + " " + n);
                    break;
                case "0 0 1 0":
                case "1 1 0 1":
                    System.out.println(1);
                    System.out.println(n + " " + (n - 1));
                    break;
                case "0 0 1 1":
                case "1 1 0 0":
                    System.out.println(0);
                    break;
                case "0 1 0 0":
                case "1 0 1 1":
                    System.out.println(1);
                    System.out.println(1 + " " + 2);
                    break;
                case "0 1 0 1":
                case "1 0 1 0":
                    System.out.println(2);
                    System.out.println(2 + " " + 1);
                    System.out.println((n - 1) + " " + n);
                    break;
                case "0 1 1 0":
                case "1 0 0 1":
                    System.out.println(2);
                    System.out.println(2 + " " + 1);
                    System.out.println(n + " " + (n - 1));
                    break;
                default:
                    System.out.println(1);
                    System.out.println(2 + " " + 1);
                    break;
            }
        }
        br.close();
    }
}
