import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by Ayushi on Thu, 07 Jun 2018.
 */
public class CF_758A_HolidayOfEquality {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] welfare = new int[n];
        for (int i = 0; i < n; i++) {
            welfare[i] = scan.nextInt();
        }
        Arrays.sort(welfare);
        int large = welfare[n-1];
        //System.out.println(large);
        int ans = 0;
        for (int j = 0; j < n; j++) {
            ans = ans+(large-welfare[j]);
        }
        System.out.println(ans);
    }
}