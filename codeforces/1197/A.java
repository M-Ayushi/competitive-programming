//import java.io.*;
import java.util.*;

/**
 * Created by Ayushi on 03 Jan 2020.
 * Problem: 1197A - DIY Wooden Ladder
 * Round: Educational (rated for Div. 2)
 */

public class CF_1197A {
    public static void main(String[] args) /*throws IOException*/ {
        //StringTokenizer st;
        //BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        //String temp = br.readLine();
        //int t = Integer.parseInt(temp);
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            //temp = br.readLine();
            //int n = Integer.parseInt(temp);
            int n = sc.nextInt();
            //temp = br.readLine();
            //st = new StringTokenizer(temp, " ");
            //int[] a = new int[n];
            int a, big, big2;
            big = big2 = 0;
            for (int j = 0; j < n; j++){
                //a[j] = Integer.parseInt(st.nextToken());
                //a[j] = sc.nextInt();
                a = sc.nextInt();
                //System.out.println("a = " + a);
                //System.out.println("big = " + big);
                //System.out.println("big2 = " + big2);
                if (a >= big) {
                    big2 = big;
                    big = a;
                }
                else if (a > big2) big2 = a;
            }
            //Arrays.sort(a);
            //int k = a[n-2] - 1;
            System.out.println(Math.min((big2-1), (n-2)));
        }
        //br.close();
        sc.close();
    }
}
