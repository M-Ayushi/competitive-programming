import java.io.*;

/*
    User: Ayushi
    Time: 13:56
    Date: 11 Jun 2019
    Website: Codeforces
    Problem: B
*/

public class B {
    public static void main(String[] args) throws IOException {
        int s = 0;
        int n = 1;
        BufferedReader re = new BufferedReader(new InputStreamReader(System.in));
        String[] temp = re.readLine().split(" ");
        int h = Integer.parseInt(temp[0]);
        int w = Integer.parseInt(temp[1]);
        String[][] g = new String[h][w];
        int[] r = new int[h];
        int[] c = new int[w];
        for (int i = 0; i < h; i++) {
            g[i] = re.readLine().split("");
            for (int j = 0; j < w; j++) {
                if (g[i][j].equals("*")) {
                    s++;
                    r[i]++;
                    c[j]++;
                }
            }
        }
        re.close();

        int rl, cl, x,y;
        rl = cl = x = y =  0;
        for (int k = 0; k < h; k++) {
            if (rl < r[k]) {
                rl = r[k];
                x = k;
            }
        }
        for (int m = 0; m < w; m++) {
            if (cl < c[m]) {
                cl = c[m];
                y = m;
            }
        }
        //x = rn;
        //y = cn;

        int u, d, z, l;
        for (u = x-1; u >= 0; u--) {
            if (g[u][y].equals("*")) n++;
            else break;
        }
        for (d = x+1; d < h; d++) {
            if (g[d][y].equals("*")) n++;
            else break;
        }
        for (l = y-1; l >= 0; l--) {
            if (g[x][l].equals("*")) n++;
            else break;
        }
        for (z = y+1; z < w; z++) {
            if (g[x][z].equals("*")) n++;
            else break;
        }

        /*System.out.println("x = " + x);
        System.out.println("y = " + y);
        System.out.println("s = " + s);
        System.out.println("n = " + n);
        System.out.println("u = " + u);
        System.out.println("z = " + z);
        System.out.println("d = " + d);
        System.out.println("l = " + l);*/

        /*System.out.println("(s == n) = " + (s == n));
        System.out.println("(u < (x - 1)) = " + (u < (x - 1)));
        System.out.println("(d > (x + 1)) = " + (d > (x + 1)));
        System.out.println("(l < (y - 1)) = " + (l < (y - 1)));
        System.out.println("(z > (y + 1)) = " + (z > (y + 1)));*/

        if ((s == n) && (u < (x - 1)) && (d > (x + 1)) && (l < (y - 1)) && (z > (y + 1))) System.out.println("YES");
        else System.out.println("NO");
    }
}
