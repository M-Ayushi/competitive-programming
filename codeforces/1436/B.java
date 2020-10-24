import java.io.*;

/**
 * Created by Ayushi on 24 Oct 2020.
 * Problem:
 * Round:
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());

            /*for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (j == o) {
                        o++;
                        j += 2;
                        System.out.print("1");
                    }
                }
            }*/
            StringBuilder sb = new StringBuilder("11");
            for (int i = 2; i < n; i++) sb.append("0");

            String a = sb.toString();

            int s = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(a.charAt((s+j)%n) + " ");
                }
                System.out.println();
                s++;
            }

        }
        br.close();
    }
}
