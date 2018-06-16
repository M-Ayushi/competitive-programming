import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * Created by Ayushi on Sat, 16 Jun 2018.
 */
public class A {
    public static void main(String[] args) {
        List<Integer> fprints = new ArrayList<>();
        Scanner scan = new Scanner(System.in);
        //Scanner sc = new Scanner(System.in);
        int k = scan.nextInt();
        int[] keys = new int[k];
        int f = scan.nextInt();
        for (int i = 0; i < k; i++) {
            keys[i] = scan.nextInt();
        }
        //String fp = sc.nextLine();
        //System.out.print(fp);
        for (int j = 0; j < f; j++) {
            fprints.add(scan.nextInt());
        }
        scan.close();
        //sc.close();

        for (int x = 0; x < k; x++) {
            if (fprints.contains(keys[x])) {
                System.out.print(keys[x] + " ");
            }
        }
    }
}