import java.util.Scanner;

/**
 * Created by Ayushi on Sat, 11 Aug 2018.
 */
public class A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int towers = scan.nextInt();
        int floors = scan.nextInt();
        int min = scan.nextInt();
        int max = scan.nextInt();
        int q = scan.nextInt();
        int[][] loc = new int[q][4];
        for (int i = 0; i < q; i++) {
            for (int j = 0; j < 4; j++) {
                loc[i][j] = scan.nextInt();
            }
        }
        int ans;
        for (int k = 0; k < q; k++) {
            ans = 0;
            int ta = loc[k][0];
            int fa = loc[k][1];
            int tb = loc[k][2];
            int fb = loc[k][3];
            if (ta == tb) {
                ans = Math.abs(fa - fb);
            }
            else {
                ans += Math.abs(ta - tb);
                if (min <= fa && fa <= max || min <= fb && fb <= max) {
                    ans += Math.abs(fa - fb);
                }
                else if (min > fa){
                    ans += min - fa;
                    ans += Math.abs(min - fb);
                }
                else if (min > fb){
                    ans += min - fb;
                    ans += Math.abs(min - fa);
                }
                else if (max < fa){
                    ans += fa - max;
                    ans += Math.abs(max - fb);
                }
                else{
                    ans += fb - max;
                    ans += Math.abs(max - fa);
                }
            }
            System.out.println(ans);
        }
    }
}
