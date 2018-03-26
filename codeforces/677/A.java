import java.util.Scanner;

/**
 * Created by alok.mahajan on 26/03/2018.
 */
public class VanyaAndFence_677A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numOfFriends = scan.nextInt();
        int height = scan.nextInt();

        int ans = numOfFriends;
        int temp;
        for (int i = 0; i < numOfFriends; i++) {
            temp = scan.nextInt();
            if (temp > height) {
                ans++;
            }
        }
        System.out.println(ans);
    }
}
