import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by Ayushi on Sun, 16 Sep 2018.
 */
public class A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] key = new int[n];
        for(int i = 0; i < n; i++) {
            key[i] = scan.nextInt();
        }
        scan.close();
        Arrays.sort(key);
        int min = key[0];
        int max = key[n-1];
        int num = (max-min)-1;
        int missing = num-(n-2);
        System.out.println(missing);
    }
}
