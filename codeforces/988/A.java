import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * Created by Ayushi on Fri, 01 Jun 2018.
 */
public class A {
    public static void main(String[] args) {
        List<Integer> team = new ArrayList<>();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
        int[] org = new int[n];
        int[] sin = new int[n];
        for (int i = 0; i < n; i++) {
            org[i] = scan.nextInt();
        }
        int a = 0;
        for(int x =0; x < n; x++) {
            if (!(team.contains(org[x]))) {
                team.add(org[x]);
                sin[a] = org[x];
                a++;
            }
        }

        if (team.size() >= k) {
            System.out.println("YES");
            for (int b = 0; b < k; b++) {
                for (int c = 0; c < n; c++) {
                    if (sin[b] == org[c]) {
                        System.out.print(c+1 + " ");
                        break;
                    }
                }
            }
        }
        else {
            System.out.println("NO");
        }
    }
}
