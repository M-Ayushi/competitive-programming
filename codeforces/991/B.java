import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by Ayushi on Sat, 23 Jun 2018.
 */
public class B {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        float[] sc = new float[n];
        for (int i = 0; i < n; i++) {
            sc[i] = scan.nextFloat();
        }
        scan.close();
        Arrays.sort(sc);
        int num = 0;
        float average = 0;
        float total = 0;
        while (average < 4.5) {
            total = 0;
            for (int j = 0; j < n; j++) {
                total = total + sc[j];
            }
            average = total / n;
            if (average >= 4.5) {
                System.out.println(num);
                break;
            }
            else {
                sc[0] = 5;
                num++;
                Arrays.sort(sc);
            }
        }
    }
    /*public static void method(float[] sc, float n, float num, float average) {
        sc[0] = 5;
        float total = 0;
        for (int j = 0; j < n; j++) {
            total = total + sc[j];
            num++;
        }
        average = total/n;
        if (average >= 4.5) {
            System.out.println(num);
        }
        else {
            method(sc, n, num, average);
        }
    }*/
}
