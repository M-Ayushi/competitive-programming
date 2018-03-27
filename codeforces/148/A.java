import java.util.Scanner;

/**
 * Created by alok.mahajan on 27/03/2018.
 */
public class InsomniaCure_148A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int k = scan.nextInt();
        int l = scan.nextInt();
        int m = scan.nextInt();
        int n = scan.nextInt();
        int d = scan.nextInt();
        scan.close();
        int ans = 0;

        for (int i = 1; i <= d; i++) {
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
                ans++;
                //System.out.println("Dragon number " + i + " will be harmed");
            }
        }

        System.out.println(ans);
    }
}
