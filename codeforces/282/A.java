import java.util.Scanner;

/**
 * Created by alok.mahajan on 27/03/2018.
 */
public class Bit_282A {
    public static void main(String[] args) {
        int x = 0;
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        String temp;
        for(int i = 0; i < n; i++) {
            temp = scan.next();
            if (temp.equals("++X") || temp.equals("X++")) {
                x++;
            }
            else {
                x--;
            }
        }
        scan.close();

        System.out.println(x);
    }
}
