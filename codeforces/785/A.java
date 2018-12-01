import java.util.Scanner;

/**
 * Created by Ayushi on Sat, 01 Dec 2018.
 */
public class CF_785A_AntonAndPolyhedrons {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int ans = 0;
        String temp;
        for (int i = 0; i < n; i++) {
            temp = scan.next();
            switch (temp) {
                case "Tetrahedron":
                    ans += 4;
                    break;
                case "Cube":
                    ans += 6;
                    break;
                case "Octahedron":
                    ans += 8;
                    break;
                case "Dodecahedron":
                    ans += 12;
                    break;
                default:
                    ans += 20;
                    break;
            }
        }
        System.out.println(ans);
    }
}
