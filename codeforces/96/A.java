import java.util.Scanner;

/**
 * Created by alok.mahajan on 26/03/2018.
 */
public class Football_96A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String t = scan.nextLine();
        scan.close();

        String[] num = t.split("");
        boolean ans = false;

        for (int i = 0; i < t.length()-5; i++) {
            if (num[i].equals(num[i+1]) && num[i+1].equals(num[i+2]) && num[i+2].equals(num[i+3]) && num[i+3].equals(num[i+4]) && num[i+4].equals(num[i+5]) && num[i+5].equals(num[i+6])) {
                ans = true;
                break;
            }
        }

        if(ans) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
