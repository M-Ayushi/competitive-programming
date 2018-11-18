import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

/**
 * Created by Ayushi on Sun, 18 Nov 2018.
 */
public class A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int g = scan.nextInt();
        Integer[] ut = new Integer[n];
        for (int i = 0; i < n; i++) {
            ut[i] = scan.nextInt();
        }
        scan.close();
        HashMap<Integer, Integer> no = new HashMap<>();

        int[] a = new int[n];
        int z = 0;
        for (int j = 0; j < n; j++) {
            if (!(no.containsKey(ut[j]))) {
                no.put(ut[j], 0);
                a[z] = ut[j];
                z++;
            }
            else {
                Integer temp = no.get(ut[j]);
                temp++;
                no.replace(ut[j], temp);
            }
        }
        //System.out.println(a.length);
        int[] num = new int[no.size()];
        for(int k = 0; k < no.size(); k++) {
            num[k] = no.get(a[k]) + 1;
        }
        Arrays.sort(num);
        //System.out.println(Arrays.toString(num));
        int big = num[no.size()-1];
        int y;
        if (big % g != 0) {
            y = big + (g-(big % g));
        }
        else {
            y = big;
        }
        int ans = 0;
        for (int l = 0; l < no.size(); l++) {
            ans += y - num[l];
        }
        System.out.println(ans);
    }
}
