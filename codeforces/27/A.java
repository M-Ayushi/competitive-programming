import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by Ayushi on Mon, 03 Sep 2018.
 */
public class CF_27A_NextTest {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        ArrayList<Integer> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            a.add(scan.nextInt());
        }
        scan.close();
        for (int j = 1; true; j++) {
            if (!(a.contains(j))) {
                System.out.println(j);
                break;
            }
        }
    }
}
