import java.util.Scanner;

/**
 * Created by Ayushi on 2/13/2018.
 */
public class watermelon4A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int w = scan.nextInt();

        if(w > 3 && w % 2 == 0) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
