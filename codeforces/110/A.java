import java.util.Scanner;

/**
 * Created by Ayushi on 2/15/2018.
 */
public class nearlyLuckyNumber110A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String in = scan.nextLine();
        String[] array = in.split("");
        int len = in.length();
        int num = 0;

        for (int i = 0; i < len; i++) {
            if(array[i].equals("4") || array[i].equals("7")) {
                num ++;
            }
        }
        if (num == 4 || num == 7) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
