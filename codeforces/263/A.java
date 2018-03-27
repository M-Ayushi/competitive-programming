import java.util.Scanner;

/**
 * Created by alok.mahajan on 27/03/2018.
 */
public class BeautifulMatrix_263A {
    public static void main(String[] args) {
        int a = 0;
        int b = 0;
        int ans = 0;
        int[][] array = new int[5][5];
        Scanner scan = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                array[i][j] = scan.nextInt();
                if (array[i][j] == 1) {
                    a = i;
                    b = j;
                }
            }
        }
        if (a < 2) {
            ans = ans + (2-a);
        }
        else {
            ans = ans + (a-2);
        }

        if (b < 2) {
            ans = ans + (2-b);
        }
        else {
            ans = ans + (b-2);
        }

        System.out.println(ans);
    }
}
