import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * Created by CoderGirl05 on 26/03/2018.
 */
public class BoyOrGirl_236A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();
        String[] name = input.split("");
        List<String> letters = new ArrayList<>();

        String temp;
        for (int i = 0; i < input.length(); i++) {
            temp = name[i];
            //System.out.println(temp);
            if (!letters.contains(temp)) {
                letters.add(temp);
                //System.out.println(temp + " has been added");
            }
        }

        int l = letters.size();
        if (l % 2 == 0) {
            System.out.println("CHAT WITH HER!");
        }
        else {
            System.out.println("IGNORE HIM!");
        }
    }
}
