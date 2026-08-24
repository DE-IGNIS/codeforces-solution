import java.util.Scanner;

public class A41_Translation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String t = sc.next();

        s = new StringBuilder(s).reverse().toString();

        if (s.equals(t))
            System.out.print("YES");
        else
            System.out.print("NO");

        sc.close();
    }
}
