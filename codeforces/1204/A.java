import java.io.*;

/**
 * Created by Ayushi on 20/08/2019.
 */

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String a = r.readLine();
        r.close();
        //System.out.println((long)Math.pow(10, a.length()-1));
        int x = 1;

        String p = "1";
        for (int i = 1; i < a.length(); i++) {
            p = p + "0";
        }

        if (a.equals(p) || a.length() == 1) {
            x--;
        }
        /*if (a.equals(String.valueOf((long)Math.pow(10, a.length()-1)))) {
            //System.out.println("Yeet");
            x--;
        }*/
        /*if (a.length() == 1) {
            x = 1;
        }*/
        System.out.println((a.length()+x)/2);
    }
}
