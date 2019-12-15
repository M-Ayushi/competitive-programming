import java.io.*;
import java.util.ArrayList;

/**
 * Created by Ayushi on 15/12/2019.
 */

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String[] a = r.readLine().split(" ");
        int n = Integer.parseInt(a[0]);
        a = r.readLine().split("");
        r.close();

        int b, w;
        b = w = 0;
        for (int i = 0; i < n; i++) {
            if (a[i].equals("B")) b++;
            else w++;
        }

        ArrayList<Integer> ans = new ArrayList<>();
        String x, y;
        if (b % 2 == 1 && w % 2 == 1) {
            System.out.println(-1);
        }
        else {
            if (b % 2 == 0) {
                x = "B";
                y = "W";
            }
            else {
                x = "W";
                y = "B";
            }

            for (int j = 0; j < n-1; j++){
                if (a[j].equals(x)) {
                    ans.add(j+1);
                    a[j] = y;
                    if (a[j+1].equals(x)) a[j+1] = y;
                    else a[j+1] = x;
                }
            }
            System.out.println(ans.size());
            for (int k = 0; k < ans.size(); k++) {
                System.out.print(ans.get(k) + " ");
            }
        }
    }
}
