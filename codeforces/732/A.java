import java.util.Scanner;

/**
 * Created by Ayushi on 08/05/2018.
 */
public class CF_732A_BuyAShovel {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int price = scan.nextInt();
        int coin = scan.nextInt();
        scan.close();
        for (int i = 1; i < 11; i++) {
            if ((price*i) % 10 == 0 || (price*i) % 10 == coin) {
                System.out.println(i);
                break;
            }
        }
    }
}
