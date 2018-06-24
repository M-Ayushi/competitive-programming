import java.util.Scanner;

/**
 * Created by Ayushi on Sun, 24 Jun 2018.
 */
public class A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int c = scan.nextInt();
        scan.close();
        int n = 0;
        while (c >= 1) {
            if (c >= 100) {
                c = c-100;
                n++;
                //System.out.println("- 100 == " + c);
            }
            else if (c >= 20) {
                c = c-20;
                n++;
                //System.out.println("- 20 == " + c);
            }
            else if (c >= 10) {
                c = c-10;
                n++;
                //System.out.println("- 10 == " + c);
            }
            else if (c >= 5) {
                c = c-5;
                n++;
                //System.out.println("- 5 == " + c);
            }
            else {
                c = c-1;
                n++;
                //System.out.println("- 1 == " + c);
            }
        }
        System.out.println(n);
    }
}
