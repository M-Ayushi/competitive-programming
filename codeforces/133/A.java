import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * Created by alok.mahajan on 27/03/2018.
 */
public class HQ9_133A {
    public static void main(String[] args) {
        List<String> a = new ArrayList<>();
        Scanner scan = new Scanner(System.in);
        String in = scan.nextLine();
        scan.close();
        String[] temp = in.split("");
        for (int i = 0; i < in.length(); i++) {
            a.add(temp[i]);
        }

        if (a.contains("H") || a.contains("Q") || a.contains("9")) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
