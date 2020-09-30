import java.io.*;
import java.util.*;
 
/**
 * Created by Ayushi on 27 Sep 2020.
 * Problem:
 * Round:
 */
 
public class A {
    public static void main(String[] args) throws IOException {
        StringTokenizer st;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
 
        while (t-- > 0) {
            //st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine(), " ");
            int[] a = new int[n];
            int j = 0;
            while (st.hasMoreTokens()) {
                a[j] = Integer.parseInt(st.nextToken());
                j++;
            }
            st = new StringTokenizer(br.readLine(), " ");
            int[] b = new int[n];
            j = 0;
            while (st.hasMoreTokens()) {
                b[j] = Integer.parseInt(st.nextToken());
                j++;
            }
            st = new StringTokenizer(br.readLine(), " ");
            int[] c = new int[n];
            j = 0;
            while (st.hasMoreTokens()) {
                c[j] = Integer.parseInt(st.nextToken());
                j++;
            }
            
            int p = 0;
            for (int i = 0; i < n-1; i++) {
                if (a[i] != p) {
                    System.out.print(a[i] + " ");
                    p = a[i];
                }
                else if (b[i] != p) {
                    System.out.print(b[i] + " ");
                    p = b[i];
                }
                else {
                    System.out.print(c[i] + " ");
                    p = c[i];
                }
            }
            if (a[n-1] != p && a[n-1] != a[0]) {
                System.out.println(a[n-1]);
            }
            else if (b[n-1] != p && b[n-1] != a[0]) {
                System.out.println(b[n-1]);
            }
            else {
                System.out.println(c[n-1]);
            }
        }
        br.close();
    }
}