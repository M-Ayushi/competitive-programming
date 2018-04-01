import java.util.Scanner;

/**
 * Created by Ayushi on 01/04/2018.
 */
public class p2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String temp;
        for (int i = 0; i < 10; i++) {
            System.out.println(i);
            temp = scan.nextLine();
            if (temp.equals("great") || temp.equals("don't think so") || temp.equals("not bad") || temp.equals("cool") || temp.equals("don't touch me")) {
                System.out.println("normal");
                break;
            }
            else if (temp.equals("don't even") || temp.equals("are you serious?") || temp.equals("worse") || temp.equals("terrible") || temp.equals("go die in a hole") || temp.equals("no way")) {
                System.out.println("grumpy");
                break;
            }
            else {
                continue;
            }
        }
    }
}
