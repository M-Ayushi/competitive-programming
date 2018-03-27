import java.util.Scanner;

/**
 * Created by alok.mahajan on 27/03/2018.
 */
public class GeorgeAndAccommodation_467A {
    public static void main(String[] args) {
        int ans = 0;
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int a;
        int b;
        for (int i = 0; i < n; i++) {
            a = scan.nextInt();
            b = scan.nextInt();
            if (b-a > 1) {
                ans++;
            }
        }
        System.out.println(ans);
    }
}
