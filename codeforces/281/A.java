import java.util.Scanner;

/**
 * Created by mahaa on 03/04/2016.
 */
public class WordCapitalization281A {
    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.next();
        String output = input.substring(0, 1).toUpperCase() + input.substring(1);
        System.out.println(output);
    }
}
