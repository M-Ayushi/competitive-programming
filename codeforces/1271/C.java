import java.io.*;

/**
 * Created by Ayushi on 15/12/2019.
 */

public class C {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = br.readLine().split(" ");
        int sn = Integer.parseInt(temp[0]);
        int sx = Integer.parseInt(temp[1]);
        int sy = Integer.parseInt(temp[2]);


        int x, y;
        int n, s, e, w;
        n = s = e = w = 0;
        for (int i = 0; i < sn; i++) {
            temp = br.readLine().split(" ");
            x = Integer.parseInt(temp[0]);
            y = Integer.parseInt(temp[1]);

            if (x < sx) w++;
            if (x > sx) e++;

            if (y < sy) s++;
            if (y > sy) n++;
        }
        br.close();

        if (n >= e && n >= s && n >= w) {
            System.out.println(n);
            System.out.println(sx + " " + (sy+1));
        }
        else if (e >= n && e >= s && e >= w) {
            System.out.println(e);
            System.out.println((sx+1) + " " + sy);
        }
        else if (s >= n && s >= e && s >= w) {
            System.out.println(s);
            System.out.println(sx + " " + (sy-1));
        }
        else {
            System.out.println(w);
            System.out.println((sx-1) + " " + sy);
        }
    }
}
